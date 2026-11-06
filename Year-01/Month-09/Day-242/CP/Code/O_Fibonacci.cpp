// Problem-3
// Codeforces-219774/problem/O

#include <bits/stdc++.h>
using namespace std;


void solve(){
   int n;
   cin >> n;
   vector<long long> d(52,0);
   for(int i = 1 ; i <= 51 ; i++){
    if(i == 1){
        d[i] = 0;
    }
    else if(i == 2){
        d[i] = 1;
        
    }
    else{
        d[i] = d[i-1]+d[i-2];
    }
   }
   cout << d[n] << '\n';
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
        solve();
    
}
