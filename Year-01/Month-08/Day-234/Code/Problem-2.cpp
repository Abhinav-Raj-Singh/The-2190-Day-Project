// Problem-2
// Hollow-Square

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i ++){
        for(int j = 0 ; j < n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << '\n';
    }

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
        solve();
    
    return 0;
}