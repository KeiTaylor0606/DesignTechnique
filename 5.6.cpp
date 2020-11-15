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

//入力データと、メモ用DPテーブル
int N;
vector<ll> h;
vector<ll> dp;

ll rec(int i){
    //DPの値が更新されていたらそのままリターン
    if(dp[i] < INF) return dp[i];

    //ベースケース：足場0のコストは0
    if(i == 0) return 0;

    //答えを表す変数をINFで初期化
    ll res = INF;

    //足場i - 1から来た場合
    chmin(res, rec(i - 1) + abs(h[i] + h[i - 1]));

    //足場i - 2から来た場合
    if(i > 1){
        chmin(res, rec(i - 2) + abs(h[i] + h[i - 2]));
    }

    //結果をメモ化をしながら返す
    return dp[i] = res;
}

int main(){
    //入力
    cin >> N;
    h.resize(N);
    for(int i = 0; i < N; i++){
        cin >> h[i];
    }

    //初期化(最小化問題なので、INFに初期化)
    dp.assign(N, INF);

    //答え
    cout << rec(N - 1) << endl;
    
    return 0;
}