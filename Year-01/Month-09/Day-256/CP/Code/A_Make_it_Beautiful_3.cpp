// Problem-3(method-3)
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
    sort(d.begin(),d.end());
    if(d[0] == d.back()){
        cout << "NO" << '\n';
        return;
    }
    else{
        cout << "YES" << '\n';
        cout << d[n-1] << ' ';
        cout << d[0] << ' ';
        for(int i = 1 ; i < n-1 ; i++){
        if(i == n-2){
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