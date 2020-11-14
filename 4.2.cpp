#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int func(int N){
    //再帰関数を呼び出したことを報告する
    cout << "func(" << N << ")を呼び出しました" << endl;

    if(N == 0) return 0;

    //再帰的に答えを求めて出力
    int result = N + func(N - 1);
    cout << N << "までの和 = " << result << endl;

    return result;
}

int main(){
    func(5);
}