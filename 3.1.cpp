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
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    //線形探索
    bool exist = false;  //初期値はfalseに
    for(int i = 0; i < N; i++){
        if(a[i] == v){
            exist = true;  //見つかったらフラグを立てる
        }
    }

    //結果出力
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}