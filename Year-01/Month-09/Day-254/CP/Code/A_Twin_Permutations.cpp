// Problem-3
// Codeforces-1831/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector <int> d(n);
    for(int i  = 0 ; i < n; i++){
        cin >> d[i];
    }
    for(int i = 1 ; i <= n ; i++){
        if(i != n){
            cout << (n-d[i-1]+1) << ' ';
        }
        else{
            cout << (n-d[i-1]+1) << '\n';

        }
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