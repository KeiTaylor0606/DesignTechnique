#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;
const int INF = 20000000;

int main(){
    //入力
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    for(int i = 0; i < N; i++){
        cin >> b[i];
    }

    //暫定最小値を格納
    int min_value = INF;

    //bをソート
    sort(b.begin(), b.end());

    //aを固定して動かす
    for(int i = 0; i < N; i++){
        //bの中でK-a[i]以上の範囲での最小値を表すイテレータ
        auto iter = lower_bound(b.begin(), b.end(), K - a[i]);

        //イテレータの示す値を取り出す
        int val = *iter;

        //min_valueと比較する
        if(a[i] + val < min_value){
            min_value = a[i] + val;
        }
    }

    cout << min_value << endl;
    return 0;
}