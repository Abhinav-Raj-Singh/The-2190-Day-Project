// Problem-2
// Codeforces-1853/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector <long long> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    
    long long ans = 1e10;
    for(int i = 1 ; i < n ; i++){
        if(d[i] < d[i-1]){
            cout << "0" << '\n';
            return ;
            
        }
        if(abs(d[i]-d[i-1]<ans)){
            ans = abs(d[i]-d[i-1]);
        }
    }
    cout << ((ans+2)/2) << '\n';
    

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}