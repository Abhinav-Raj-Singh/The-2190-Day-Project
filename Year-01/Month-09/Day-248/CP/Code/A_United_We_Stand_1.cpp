// Problem-2
// Codeforces-1859/A

#include <bits/stdc++.h>
using namespace std;

void solve(){

    long long n;
    cin >> n;
    vector <long long> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end()); 
    vector <long long> b;
    vector <long long> c;
    
    b.push_back(a[0]);
    for(int i = 1 ; i < n ; i++){
        if((a[0]== a[i])){
            b.push_back(a[i]);
        }
    
        else{ 
            c.push_back(a[i]);

        }
        
    }
    if((b.size() == 0) || (c.size() == 0)){
        cout << -1 << '\n';
        return ;
    }
    cout << b.size() << '\n';
    cout << c.size() << '\n';
    for(int i = 0 ; i < b.size() ; i++){
        if(i != b.size()-1){
            cout << b[i] << ' ';
        }
        else{
            
            cout << b[i] << '\n';
        }
    }
    for(int i = 0 ; i < c.size() ; i++){
        if(i != c.size()-1){
            cout << c[i] << ' ';
        }
        else{
            
            cout << c[i] << '\n';
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