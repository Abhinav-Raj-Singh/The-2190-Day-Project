// Problem-1
// Codeforces-1877/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>d(n-1);
    for(int i =0 ; i < n-1 ;i++){
        cin >> d[i];
    }
    int r = accumulate(d.begin(),d.end(),0);
    cout << (-1)*(r) << '\n';
}

int main(){

    ios_base::sync_with_stdio;cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
   }
   return 0;
}