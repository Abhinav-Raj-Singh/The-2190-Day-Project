// Problem-1
// Codeforces-1183/B


#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    int k;
    cin >> k;
    vector <long long> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    d[0] += k;
    for(int i = 1 ; i < n ; i++){
        if(abs(d[0]-d[i]) <= k){
            // Nothing
        }
        else{
            cout << -1 << "\n";
            return;
        }
    }
    cout << d[0] << '\n';
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