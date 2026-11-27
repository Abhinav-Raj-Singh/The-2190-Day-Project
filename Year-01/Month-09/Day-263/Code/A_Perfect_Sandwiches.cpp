// Problem-3
// Codeforces-2276/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    if(a > b && b > 0){
        cout << min(b,(a-b)) << '\n';
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