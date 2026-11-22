// Problem-2
// Codeforces-318/A


#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k;
    cin >> n >> k;
    if(k <= ((n+1)/2)){
        cout << (1+((k-1)*2)) << '\n';
    }
    else{
        cout << (((((k-(n+1)/2))*2))) << '\n';

    }
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);
   
        solve();
    
    return 0;
}