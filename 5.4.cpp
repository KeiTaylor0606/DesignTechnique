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

const ll INF = 1LL << 60; //十分大きな値にする(ここでは2^60)

int main(){
    //入力
    int N;
    cin >> N;
    vector<ll> h(N);
    for(int i = 0; i < N; i++){
        cin >> h[i];
    }

    //初期化
    vector<ll> dp(N, INF);

    //初期条件
    dp[0] = 0;

    //ループ
    for(int i = 1; i < N; i++){
        if(i + 1 < N){
            chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        }
        if(i + 2 < N){
            chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
        }
    }

    //答え
    cout << dp[N - 1] << endl;
    return 0;
}