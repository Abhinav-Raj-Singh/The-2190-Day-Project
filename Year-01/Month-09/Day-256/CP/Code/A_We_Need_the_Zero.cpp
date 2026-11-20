// Problem-4
// Codeforces-1805/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    int r = 0 ;
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans ^= d[i];
    }
    if(n % 2 == 0){
        if(ans == 0){
            cout << 0 << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }
    else{
        cout << ans << '\n';
    }
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