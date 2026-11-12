// Problem-1
// Codeforces-1862/B

#include <bits/stdc++.h>
using namespace std;

void solve(){

    long long n ;
    cin >> n;
    vector <long long> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    vector <long long> e;
    e.push_back(d[0]);
    for(int j = 1 ; j < n ; j++){
        if(d[j-1] <= d[j]){
            e.push_back(d[j]);
        }
        else{
            
            e.push_back(1);
            e.push_back(d[j]);
            
           
        }
     
        }
    
    cout << e.size() << '\n';
    for(int i = 0 ; i < e.size();i++){
        if(i == e.size()-1){
            cout << e[i] << '\n';
            return ;
        }
        cout << e[i] <<  ' ';
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