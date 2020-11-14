#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int main(){
    //入力を受け取る
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for(int i = 0; i< N; i++){
        cin >> a[i];
    }

    //線形探索
    int found_id = -1; //初期値は-1などあり得ない値に設定する
    for(int i = 0; i < N; i++){
        if(a[i] == v){
            found_id = i; //見つかった添え字を記録
            break; //ループを抜ける
        }
    }

    //結果出力(-1の時は見つからなかったことを表す)
    cout << found_id << endl;
    return 0;
}