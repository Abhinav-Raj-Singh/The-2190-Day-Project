// Problem-1
// Codeforces-1530/A

#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if((s[i] != '1') && (s[i] != '0') && ((s[i]-'0') > ans)){
            ans = s[i]-'0';
            
        }
    }
    cout << (ans == 0 ? 1 : ans) << '\n';
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}