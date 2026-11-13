// Problem-1(method-2)
// Codeforces-1858/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b , c;
    cin >> a >> b >> c;
    a += (c+1)/2;
    b += (c)/2;
    
    if(a > b){
        cout << "First" << '\n';
    }
    else{
        cout << "Second" << '\n';
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