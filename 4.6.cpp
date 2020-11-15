#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int fibo(int N){
    //再帰関数を呼び出したことを報告する
    cout << "fibo(" << N << ") を呼び出しました" << endl;


    //ベースケース
    if(N == 0) return 0;
    else if(N == 1) return 1;

    //再帰的に答えを求めて出力
    int result = fibo(N - 1) + fibo(N - 2);
    cout << N << "項目 = " << result << endl;

    return result;
}
int main(){
    fibo(6);
    return 0;
}