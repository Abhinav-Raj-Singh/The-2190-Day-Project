// Problem-4
// geeksforgeeks-pyramid-patterns/1

#include <bits/stdc++.h>
using namespace std;


void solve(){
   int n; 
   cin >> n;
   for(int i = 1 ; i <= n ;i++){
    for(int j = 0 ; j < n-i ;j++){
        cout << ' ';
    }
    for(int k = 0 ; k < ((2*i)-1) ; k++){
        cout << '*';
    }
    cout << '\n';
   }
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
        solve();
    
}
