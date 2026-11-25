// Problem-1
// Codeforces-1896/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int mn = n-1;
    int mx = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'A'){
            mn = min(mn,i);
        }
        else{
            mx = max(mx,i);

        }
    }
    cout << max(0 , mx-mn) << '\n';
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