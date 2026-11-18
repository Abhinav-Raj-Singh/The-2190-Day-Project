// Problem-2
// Codeforces-1834/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    int r1 = 0;
    int p = 0;
    for(int i = 0 ; i < n ; i++){
        int r;
        cin >> r;
        if(r == 1){
            r1++;
        }
        else if(r == -1){
            p++;
        }
        
    }
   
    int ans = 0;
    while(p > r1 || (p%2 != 0)){
        p--;
        r1++;
        ans++;
    }
    cout << ans << '\n';
    return ;
    
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