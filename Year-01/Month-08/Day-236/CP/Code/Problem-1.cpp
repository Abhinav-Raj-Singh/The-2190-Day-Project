// Problem-1
// Codeforces-2013/A

#include <bits/stdc++.h>
using namespace std;

void solve(){    
    long long n ;
    cin >> n;
    long long a,b;
    cin >> a >> b;
    b = min(a,b);
    int r = ceil(n/(b*1.0));
    cout << r  << '\n';
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}