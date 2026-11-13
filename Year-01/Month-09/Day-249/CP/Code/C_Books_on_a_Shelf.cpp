// Problem-3
// Codeforces-2290/problem/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector <long long> a(n);
    vector <long long> b;
    vector <long long> c;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long ans = 1;
    b.push_back(a[0]);
    for(int i = 1; i< n ; i++){
        if(b.back() < a[i]){
            b.push_back(a[i]);
            ans++;
        }
        else{
            c.push_back(a[i]);
        }
    }
    for(int i = c.size()-1 ; i >= 0 ; i--){
        if(b.back() > c[i]) ans++;
        if(b.back() == c[i] && i == c.size()-1) ans++;
        b.push_back(c[i]);

    }
    cout << ans << '\n';
    for(int i = 0 ; i < b.size() ; i++){
        if(i != b.size()-1){
            cout << b[i] << ' ';
        }
        else{
            cout << b[i] << '\n';
            
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