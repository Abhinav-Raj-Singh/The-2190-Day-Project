// Problem-1(method-3)
// Codeforces-2051/B


#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , a,b,c;
    cin >> n >> a >> b >> c ;
    long long d = (a+b+c);
    long long ans = (n/d)*d;
    long long i = (n/d)*3;
    for(auto x: {a,b,c}){
        if(n > ans){
            i++;
            ans += x;
        }
    }
    cout << i << '\n';
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}