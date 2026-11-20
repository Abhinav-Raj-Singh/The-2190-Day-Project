// Problem-3
// Codeforces-1783/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> d(n);
    vector <int> f;
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
        int l = 0;
        int r = n-1;
        if(n % 2 == 0){
        for(int i = 0 ; i < n ; i++){
            if(l <= (n/2)-1){
                f.push_back(d[r]);
                f.push_back(d[l]);
                l++;
                r--;
            }
        }
    }
        else{
            for(int i = 0 ; i < n ; i++){
            if(l == (n/2)){
                f.push_back(d[l]);
            
            }
            else{
                f.push_back(d[r]);
                f.push_back(d[l]);
                l++;
                r--;
            }
        }
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        if(i == n-1){
            cout << f[i] << '\n';
            return ;
        }
        else{
        cout << f[i] << ' ';
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