// Problem-3
// Codeforces-1506/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , m , x;
    cin >> n >> m >> x;
    x--;
    long long col = x/n;
    long long row = (x)%n;
    long long ans = ((row*m)+col+1);
    cout << ans << '\n';
}

int main (){

    ios_base::sync_with_stdio(0);cin.tie(0);
    long long t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}