// Problem-2(method-2)
// Codeforces-1806/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b ,c ,d;
    cin >> a >> b >> c >> d;
    if((a>=c || a<=c) && (d>=b)){
        int ans = c-a;
        b += c-a;
        if(b > d){
            cout << -1 << '\n';
            return;
        }
        else{
            cout << ((ans)+((d-b)*2)) << '\n';

        }
        // cout << ans << '\n';
        // cout << c-a << '\n';
        // cout << ((c-a) + (2*ans)) << '\n';
    }
    else{
        cout << -1 << '\n';
    }
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