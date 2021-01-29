#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

//コインの金額
const vector<int> value = {500, 100, 50, 10, 5, 1};

int main(){
    //入力
    int x;
    vector<int> a(6);
    cin >> x;
    for(int i = 0; i < 6; i++){
        cin >> a[i];
    }

    //結果
    int result = 0;

    for(int i = 0; i < 6; i++){
        //枚数制限がない時の場合の枚数
        int add = x / value[i];

        //枚数制限を考慮
        if(add > a[i]){
            add = a[i];
        }

        //残金
        x -= value[i]*add;

        //枚数の加算
        result += add;
    }

    //出力
    cout << result << endl;
    return 0;
}