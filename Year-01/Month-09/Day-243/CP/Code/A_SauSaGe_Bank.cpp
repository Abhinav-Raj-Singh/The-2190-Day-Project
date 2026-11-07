// Problem-1
// Codeforces-2269/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    int ans = int(pow(2,(n-k+1)))+2*(k-1);
    cout << ans << '\n';

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