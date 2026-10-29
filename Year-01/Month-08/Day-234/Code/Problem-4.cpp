// Problem-4
// Hourglass

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
     cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = n-i-1 ; j >0 ;j--){
            cout << '*';
        }
        for(int k = 0 ;  k < 2*i+1;k++){
            cout << " ";
        }
        cout << '\n';
    }
    

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
        solve();
    
    return 0;
}