// Problem-1(method-2)
// Codeforces-1530/A

#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;
    cout << (*max_element(s.begin(),s.end()))-'0' << '\n';
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}