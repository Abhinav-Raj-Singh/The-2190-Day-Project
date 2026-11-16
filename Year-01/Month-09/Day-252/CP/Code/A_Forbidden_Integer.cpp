// Problem-1
// Codeforces-1845/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k , x;
    cin >> n >> k >> x;
    if( x != 1){
        cout << "YES" << '\n';
        cout << n << '\n';
        for(int i = 0 ; i < n-1 ; i++){
            cout << 1 << ' ';
        }
        cout << 1 << '\n';
    }
    else if(x == 1 && n%2 == 0 && k > 1){
        cout << "YES" << '\n';
        cout << (n/2) << '\n';
        for(int i = 0 ; i < (n/2)-1 ; i++){
            cout << 2 << ' ';
        }
        cout << 2 << '\n';
    }
    else if(x == 1 && n%2 != 0 && k > 2){
        cout << "YES" << '\n';
        cout << (n/2) << '\n';
        for(int i = 0 ; i < (n/2)-1 ; i++){
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
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