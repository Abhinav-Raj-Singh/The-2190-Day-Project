// Problem-1
// Codeforces-2236/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i = 0 ; i < n-k ;i++){
        if(s[i] == '1'){
            s[i] = '0';
            if(s[i+k] == '1'){
            s[i+k] = '0';
        }
        else if(s[i+k] == '0'){
            s[i+k] = '1';
        } 
        }
        
    }
    for(int i = 0 ; i < n ; i++){
        if(s[i] != '0'){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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