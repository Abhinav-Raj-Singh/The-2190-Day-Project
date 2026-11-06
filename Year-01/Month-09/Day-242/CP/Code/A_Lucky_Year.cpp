// Problem-6
// codeforces-808/A

#include <bits/stdc++.h>
using namespace std;


void solve(){
   int n;
   cin >> n;
   if(n < 10 ){
    cout << 1 << '\n';
   }
   else{
    int copy = n;
    int p = 1;
    int ans = 0;
    while(copy!=0){
        p *= 10;
        copy /= 10;
        if(copy < 10 && copy != 0){
            ans = (copy+1)*p;
        }
    }
    cout << ans-n << '\n'; 
   }
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
        solve();
    
}
