#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

//xが条件に満たすかどうか
bool P(int x){

}

//P(x) = trueとなる最小のxを返す
int binary_search(){
    //P(left) = false, P(right) = trueちなるように
    int left, right;

    while (right - left > 1)
    {
        int mid = left + (right - left)/2;
        if(P(mid)){
            right = mid;
        }
        else{
            left = mid;
        }
        return right;
    }
}
