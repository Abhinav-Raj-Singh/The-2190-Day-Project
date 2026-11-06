// Problem-7
// hackerearth-Print_the_pattern


#include <bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  cin >> n;

    int r = 2;
  cout << 1 << '\n';
  for(int i = 2 ; i <= n ; i++){
    if(i%2 == 0){
        for(int j = 1 ; j <=i ;j++){
            cout << r << ' ';
            r++;
        }
        cout << '\n';
    }
    else{
        int p = (r+i-1);
        for(int j = p ; j> p-i; j--){
            cout << j << ' ';
            r++;
        }
        cout << '\n';
    }
  }
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
        solve();
    
}
