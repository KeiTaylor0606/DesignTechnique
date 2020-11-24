#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

const ll INF = 1lL << 60; //十分大きな値(ここでは2^60)

int main(){
    //入力
    int N;
    cin >> N;
    vector<vector<ll>> c(N + 1, vector<ll>(N + 1));
    for(int i = 0; i < N + 1; i++){
        for(int j = 0; j < N + 1; j++){
            cin >> c[i][j];
        }
    }

    //DPテーブル定義
    vector<ll> dp(N + 1, INF);

    //DP初期条件
    dp[0] = 0;

    //DPループ
    for(int i = 0; i <= N; i++){
        for(int j = 0; j < i; j++){
            chmin(dp[i], dp[j] + c[j][i]);
        }
    }

    //答えの出力
    cout << dp[N] << endl;
    
    return 0;
}