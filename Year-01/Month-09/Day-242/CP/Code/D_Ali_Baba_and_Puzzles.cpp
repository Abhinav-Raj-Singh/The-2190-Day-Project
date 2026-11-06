// Problem-2
// Codeforces-326175/problem/D

#include <bits/stdc++.h>
using namespace std;


void solve(){
   long long a,b,c,d;
   cin >> a >> b >> c >> d;
   long long s1 = a+b-c;
   long long s2 = a+b*c;
   long long s3 = a-b+c;
   long long s4 = a-b*c;
   long long s5 = a*b+c;
   long long s6 = a*b-c;
    if(s1 == d || s2 == d || s3 == d || s4 == d || s5 == d
     || s6 == d){
        cout << "YES" << '\n'; 
    }
    else{
        
        cout << "NO" << '\n'; 
    }
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
        solve();
    
}
