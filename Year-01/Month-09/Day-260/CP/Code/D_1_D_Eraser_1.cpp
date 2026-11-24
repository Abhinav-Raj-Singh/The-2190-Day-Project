// Problem-1
// Codeforces-1873/D


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'B'){
            ans++;
            i++;
            int r = i;
            for(int j = i ; j < r+k-1 ; j++){
                i++;
            }
            i--;
        }
    }
    cout << ans << '\n';
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}