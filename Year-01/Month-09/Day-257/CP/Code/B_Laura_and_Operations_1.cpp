// Problem-3
// Codeforces-1900/B

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int a,b,c;
    cin >> a >> b >> c;
    
    if(abs(b-c)%2 == 0){
        cout << 1 << ' ';
    }
    else{
        cout << 0 << ' ';
    }
    
    if(abs(a-c)%2 == 0){
        cout << 1 << ' ';
    }
    else{
        cout << 0 << ' ';
    }

    if(abs(a-b)%2 == 0){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
    

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}