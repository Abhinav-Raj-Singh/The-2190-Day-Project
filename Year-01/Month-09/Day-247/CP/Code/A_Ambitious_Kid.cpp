// Problem-2
// Codeforces-1866/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int r = 1e6;
    for(int i =0 ; i < n ;i++){
        int a;
        cin >> a;
        if(abs(a) < r) r = abs(a);
    }
    
        cout <<r << '\n';
        
    
}

int main(){

    ios_base::sync_with_stdio;cin.tie(0);
    
        solve();
   
   return 0;
}