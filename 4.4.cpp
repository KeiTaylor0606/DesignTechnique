#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int GCD(int m, int n){
    //ベースケース
    if(n == 0) return m;
    
    //再帰呼び出し
    return GCD(n, m%n);
}

int main(){
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}