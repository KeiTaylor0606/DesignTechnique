#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

template<class T> void chmax(T& a, T b){
    if(a < b){
        a = b;
    }
}

int main(){
    //入力
    int N;
    ll W;
    cin >> N >> W;
    vector<ll> weight(N), value(N);
    for(int i = 0; i < N; i++){
        cin >> weight[i] >> value[i];
    }

    //DPテーブル定義
    vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));

    //DPループ
    for(int i = 0; i < N; i++){
        for(int w = 0; w <= W; i++){
            //i番目の品物を選ぶ場合
            if(w - weight[i] >= 0){
                chmax(dp[i + 1][w], dp[i][w -weight[i]] + value[i]);
            }

            //i番目の品物を選ばない場合
            chmax(dp[i + 1][w], dp[i][w]);
        }
    }

    //最適値の出力
    cout << dp[N][W] << endl;
    return 0;
}