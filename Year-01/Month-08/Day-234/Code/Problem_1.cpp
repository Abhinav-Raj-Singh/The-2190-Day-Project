// Problem-1
// Codeforces-1238/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x , y;
    cin >> x >> y;
    long long r = x-y;
    if(r>=2){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';

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