// Problem-2
// hackerrank-Number Groups


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if( n == 1){
        cout << 1 << '\n';
    }
    else if(n == 2){
        cout << 8 << '\n';
    }
    else{
        long long term = (n*(1+n-2*1LL)*1LL)/2; 
        term++;
        long long ans = (1 + ((term-1)*2));
        ans = (((n*1LL)*((2*ans*1LL) + ((n-1)*2)))*1LL)/2 ;
        cout << ans << '\n';
    }
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);

        solve();
    
    return 0;
}