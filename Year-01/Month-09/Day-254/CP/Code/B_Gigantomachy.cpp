// Problem-1
// Codeforces-2257/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b;
    cin >> a >> b ;
    long long a1;
    long long b1;
    for(int i = 0 ; i < a ; i++){
        if(i == 0){
            cin >> a1;
        }
        else{
            int r;
            cin >> r;
        }
    }
    for(int i = 0 ; i < b ; i++){
        if(i == 0){
            cin >> b1;
        }
        else{
            int r;
            cin >> r;
        }
    }
    cout << (((a1+a-1) >= (b1+b-1) ? 1 : 2)) << '\n';

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