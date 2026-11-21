// Problem-4
// Codeforces-1766/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s = to_string(n);
    if(n <= 10){
        cout << n << '\n';
    }
    else{
        cout << (((10)*(s.size()-1)-(s.size()-2))+ ((s[0]-'0')-1)) << '\n';
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