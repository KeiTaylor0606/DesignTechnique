#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

//rec(i):足場0から足場iまで至るまでの最小コスト
int N;
vector<ll> h(N);

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

const ll INF = 1LL << 60; 

ll rec(int i){
    //足場0のコストは0
    if(i == 0) return 0;

    //答えを格納する変数をINFに初期化する
    ll res = INF;

    //頂点i - 1から来た場合
    chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));

    //頂点i - 2から来た場合
    if(i > 1){
        chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
    }

    //答え
    return res;

}