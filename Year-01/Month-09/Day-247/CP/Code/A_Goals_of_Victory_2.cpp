// Problem-1(method-2)
// Codeforces-1877/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i =0 ; i < n-1 ;i++){
        int r;
        cin >> r;
        ans -= r;
    }
    cout << ans << '\n';
}

int main(){

    ios_base::sync_with_stdio;cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
   }
   return 0;
}