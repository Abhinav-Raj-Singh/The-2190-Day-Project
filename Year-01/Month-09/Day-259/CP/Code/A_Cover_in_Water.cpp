// Problem-2
// Codeforces-1900/A

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '.' && ((i+1 < n) && s[i+1]== '.')  && ((i+2 < n) &&s[i+2] == '.')){
            cout << 2 << '\n';
            return;
        }
        else if(s[i] == '.'){
            ans++;
        }
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