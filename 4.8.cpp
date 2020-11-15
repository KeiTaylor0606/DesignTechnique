#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

//fibo(N)の答えをメモ化する配列
vector<ll> memo;

ll fibo(int N){
    //ベースケース
    if(N == 0) return 0;
    else if(N == 1) return 1;

    //メモをチェック(既に計算済ならば答えをリターンする)
    if(memo[N] != -1) return memo[N];

    //答えをメモ化しながら、再帰呼び出し
    return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main(){
    //メモ化配列を-1で初期化する
    memo.assign(50, -1);

    //fibo(49)を呼び出す
    fibo(49);

    //memo[0], ... , memo[49]に答えが格納されている
    for(int N = 2; N < 50; N++){
        cout << N << "項目：" << memo[N] << endl;
    }
    return 0;
}