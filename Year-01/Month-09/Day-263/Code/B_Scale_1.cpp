// Problem-1
// Codeforces-1996/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int ri = k-1;
    int rj = k-1;
    bool check = false;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            char a;
            cin >> a;
            if(i == ri && j == rj){
                cout << a ;
                check = true;
                rj += k;
            }
        }
        if(check == true){
            ri += k;
            rj = k-1;
            cout << '\n';
            check = false;
        }
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