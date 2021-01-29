#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

//区間
using Interval = P;

//区間を終端時刻で大小比較する関数
bool cmp(const Interval &a, const Interval &b){
    return a.second < b.second;
}

int main(){
    //入力
    int n;
    cin >> n;
    vector<Interval> inter(n);
    for(int i = 0; i < n; i++){
        cin >> inter[i].first >> inter[i].second;
    }

    //終端時刻が早い順にソート
    sort(inter.begin(), inter.end(), cmp);

    //貪欲に選ぶ
    int res = 0;
    int current_end_time = 0;
    for(int i = 0; i < n; i++){
        //最後に選んだ区間と被るのは除く
        if(inter[i].first < current_end_time) continue;

        res++;

        current_end_time = inter[i].second;
    }

    cout << res << endl;
    return 0;
}