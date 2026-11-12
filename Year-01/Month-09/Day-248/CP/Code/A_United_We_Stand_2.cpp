// Problem-2(method-2)
// Codeforces-1859/A

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end()); 
    if(a[0] == a.back()){
        cout << -1 <<'\n';
    }
    else{
        int t = 0;
        while(a[0] == a[t]) t++;
        cout << t << ' ' << (n-t) << '\n';
        
        for(int i = 0 ; i < t; i++){ 
            if(i != t-1){
            cout << a[i] << ' ';
        }
        else{
            cout << a[i] << '\n';
            
        }
        }
        for(int i = t ; i < n; i++){ 
            if(i != n-1){
            cout << a[i] << ' ';
        }
        else{
            cout << a[i] << '\n';
            
        }
        }
    }
    
    
    
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}