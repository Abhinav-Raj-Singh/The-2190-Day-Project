// Problem-3(method-2)
// Codeforces-1900/B

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int a,b,c;
    cin >> a >> b >> c;
    
    int ans [3] = {0,0,0};
    if(a%2 == b%2){
        ans[2]++;
    }
    if(b%2 == c%2){
        ans[0]++;
    }
    if(c%2 == a%2){
        ans[1]++;
    }
    for(auto &i : ans){
        cout << i  << ' ';
    }
    cout << '\n';

    

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}