// Problem-1(method-2)
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
    cout << count(d.begin(),d.end(),d[0]) << '\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
