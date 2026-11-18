// Problem-2(method-2)
// Codeforces-1834/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    
    int nega = 0;
    for(int i = 0 ; i < n ; i++){
        int r ;
        cin >> r;
        nega += (r == -1);
    }
    int ans = 0 ;
    while(nega > n/2 || nega%2 == 1){
        ans++;
        nega--;
    }
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