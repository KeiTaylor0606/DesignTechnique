#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;
const ll INF = 1LL << 60; //十分大きい値

int main(){
    //入力
    int N;
    cin >> N;
    vector<ll> h(N), s(N);
    for(int i = 0; i < N; i++){
        cin >> h[i] >> s[i];
    }

    //二分探索
    ll left = 0, right = INF;
    while (right - left > 1)
    {
        ll mid = (left + right)/2;

        //判定
        bool ok = true;
        vector<ll> t(N, 0);  //各風船を割るまでの時間宣言

        for(int i = 0; i < N; i++){
            //そもそもmidが初期高度よりも低かったらfalse
            if(mid < h[i]){
                ok = false;
            }
            else{
                t[i] = (mid - h[i])/s[i];
            }
        }

        //時間制限が差し迫っている順にソート
        sort(t.begin(), t.end());

        for(int i = 0; i < N; i++){
            if(t[i] < i){
                ok = false; //時間切れ発生
            }
        }

        if(ok){
            right = mid;
        }
        else{
            left = mid;
        }

        cout << right << endl;
    }
    
    return 0;
}