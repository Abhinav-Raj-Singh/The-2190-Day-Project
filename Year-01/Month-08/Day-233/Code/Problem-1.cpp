// Problem-1
// Codeforces-2148/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    cout << (b%2 == 0 ? 0 : a) << '\n';

}

int main (){

    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}