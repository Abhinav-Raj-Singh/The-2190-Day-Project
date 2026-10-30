// Problem-3
// Diamond pyramid

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1; j++){
            cout << " ";
        }
        cout << " ";
        for(int j = 0 ; j <= i ; j++){
            cout << "* ";
        }
        cout << '\n';
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j <=i; j++){
            cout << ' ';
        }
        for(int j = n-i-1 ; j >=0 ; j--){
            cout << "* ";
        }
        cout << '\n';
    }

}

int main(){
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}