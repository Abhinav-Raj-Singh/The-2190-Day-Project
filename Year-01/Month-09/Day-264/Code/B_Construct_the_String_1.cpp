// Problem-1
// Codeforces-1335/B


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    int r = 1;
    for(int i = 0 ; i < a ; i++){
        if(i <= (abs(a-b))){
            s.push_back(char('a'));
        }
        else{
            s.push_back(char('a'+r));
            r++;
        }
    }
    int p = 0;
    for(int i = 0 ; i < n ; i++){
        if(p == a){
            p = 0;
        }
        cout << s[p] ;
        p++;
    }
    cout << '\n';
   
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