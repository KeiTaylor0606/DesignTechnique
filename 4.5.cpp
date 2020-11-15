#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int fibo(int N){
    //ベースケース
    if(N == 0) return 0;
    else if(N == 1) return 1;

    //再帰呼び出し
    return fibo(N - 1) + fibo(N - 2);
}