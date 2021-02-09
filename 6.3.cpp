#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int main(){
    cout << "Start" << endl;

    //年齢の候補を表す区間を、[left, right)と表す
    int left = 20, right = 36;

    //年齢を一つに絞れない内は繰り返す
    while (right - left > 1)
    {
        //区間の真ん中
        int mid = left + (right - left)/2;

        //mid以上かを聞いてyes/noで回答を得る
        cout << "Is the age less than " << mid << "? (yes/no)" << endl;

        string ans;
        cin >> ans;

        //回答に応じて、あり得る年齢の数を絞る
        if(ans == "yes"){
            right = mid;
        }
        else{
            left = mid;
        }
    }

    //解答
    cout << "The age is " << left << "!" << endl;
    
    return 0;
}