#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int main(){
    vector<ll> F(50);
    F[0] = 0; F[1] = 1;
    for(int N = 2; N < 50; N++){
        F[N] = F[N - 1] + F[N - 2];
        cout << N << "項目:" << F[N] << endl;
    }
    return 0;
}