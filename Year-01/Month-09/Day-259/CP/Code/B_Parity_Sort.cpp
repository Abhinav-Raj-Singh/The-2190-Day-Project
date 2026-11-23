// Problem-1
// Codeforces-1851/B

#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin >> n;
    vector <long long> d(n);
    vector <long long> r(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    r = d;
    sort(d.begin(),d.end());
    for(int i = 0 ; i < n; i++){
        if(d[i]%2 != r[i]%2){
            cout << "NO" << '\n';
            return ;
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