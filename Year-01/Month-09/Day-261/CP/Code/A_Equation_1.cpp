// Problem-3
// Codeforces-1269/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 9 << ' ' << 8 << '\n';
    }
    else{
        cout << ((2*n)+n) << ' ' << (2*n) << '\n';
    }
}

int main(){
    
    ios_base::sync_with_stdio(0);cin.tie(0);
   
        solve();

    return 0;
}