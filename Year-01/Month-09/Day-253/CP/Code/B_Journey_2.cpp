// Problem-1(method-2)
// Codeforces-2051/B


#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , a,b,c;
    cin >> n >> a >> b >> c ;
    long long d = (a+b+c);
    long long ans = (n/d)*d;
    long long i = (n/d)*3;
    if(n % d == 0){
        cout << i << '\n';
    }
    else if(n%d <= a){
        cout << i+1 << '\n';
    }
    else if((n%d)<= a+b){
        cout << i+2 << '\n';
    }
    else{
        cout << i+3 << '\n';
    }
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}