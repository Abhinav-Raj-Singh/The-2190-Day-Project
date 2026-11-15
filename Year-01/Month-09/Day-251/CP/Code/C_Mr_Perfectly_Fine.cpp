// Problem-1
// Codeforces-1829/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<pair<int,string>> m;
    for(int i = 0 ; i< n; i++){
        int r;
        string s;
        cin >> r >> s;
        m.push_back({r,s});
    }
   
    int min_01 = 1e9;
    int min_10 = 1e9;
    int min_11 = 1e9;
    for(int i = 0 ; i < m.size() ; i++){
        if(m[i].second == "01" && m[i].first < min_01){
            min_01 = m[i].first;
        }
        else if(m[i].second == "10" && m[i].first < min_10){
            min_10 = m[i].first;
        }
        else if(m[i].second == "11" && m[i].first < min_11){
            min_11 = m[i].first;
        }
    }
    if(min({(min_01+min_10),(min_11)}) == 1e9){
        cout << -1 << '\n';
        return;
    }
    cout << (min({(min_01+min_10),(min_11)})) << '\n';
   
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