// Problem-1(method-2)
// Codeforces-1996/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector <string> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    for(int i = 0 ; i < n ; i+=k){
        for(int j = 0 ; j < n ; j+=k){
            cout << d[i][j];
        }
        cout << '\n';
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