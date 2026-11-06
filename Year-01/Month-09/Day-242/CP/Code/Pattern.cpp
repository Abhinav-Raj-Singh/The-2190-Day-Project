// Problem-5
// hackerearth-Pattern

#include <bits/stdc++.h>
using namespace std;


void solve(){
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++){
    if(i == 1 || i == n){
        for(int j = 0 ; j < n ; j++){
            cout << '*';
        }
        cout << '\n';
    }
    else{
       
        for(int j = 0 ; j <= n-i-1 ;j++){
            cout << ' ';
        }
        cout << '*' <<'\n';
    }
   }
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
        solve();
    
}
