#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int main(){
    //入力
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    //解答
    ll sum = 0;
    for(int i = n - 1; i >= 0; i--){
        //前回までの操作回数を足す
        a[i] += sum;
        ll amari = a[i] % b[i];
        ll d = 0;
        if(amari != 0){
            d = b[i] - amari;
        }
        sum += d;
    }

    cout << sum << endl;
    return 0;
}