// Problem-3(method-4)
// Codeforces-1783/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    
    if(d[0] == d.back()){
        cout << "NO" << '\n';
        return;
    }
    else{
        cout << "YES" << '\n';
        reverse(d.begin()+1,d.end());
       
        for(int i = 0 ; i < n ; i++){
        if(i == n-1){
            cout << d[i] << '\n';
            return ;
        }
        else{
        cout << d[i] << ' ';
    }
    }
    }
    
    
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}