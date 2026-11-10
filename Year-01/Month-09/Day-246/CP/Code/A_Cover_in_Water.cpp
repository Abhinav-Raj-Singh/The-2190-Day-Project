// Problem-1
// Codeforces-1900/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int b = count(s.begin(),s.end(),'#');
    string r = "...";
    if(s.find(r)!= string::npos){
        cout << 2 << '\n';
    }
    else{
        cout << (s.size()-b) << '\n';
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