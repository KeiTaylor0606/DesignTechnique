#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int func(int N){
    if(N == 0) return 0;
    return N + func(N + 1);
}