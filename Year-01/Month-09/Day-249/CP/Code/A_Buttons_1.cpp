// Problem-1
// Codeforces-1858/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b , c;
    cin >> a >> b >> c;
    if(a > b){
        cout << "First" << '\n';
    }
    else if(b > a){
        cout << "Second" << '\n';
    }
    else if(a == b){
        cout << (c%2 == 0? "Second" : "First") << '\n';
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