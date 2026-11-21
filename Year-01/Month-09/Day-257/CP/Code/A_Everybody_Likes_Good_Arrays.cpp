// Problem-2
// Codeforces-1777/A

#include <bits/stdc++.h>
using namespace std;

void solve(){

    long long n ;
    cin >> n;
    vector <long long> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    int ans = 0;
    for(int i = 1 ; i < n; i++){
        if(d[i]%2 == d[i-1]%2){
            ans++;
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