// Problem-1
// Codeforces-1818/A

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;
    vector <string> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    } 
    int cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(d[0] == d[i]){
            cnt++;
        }
    }
    cout << cnt << '\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
