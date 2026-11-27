// Problem-4
// atcoder-abc251_b

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,w;
    cin >> n >> w;
    vector <int> d(n);
    vector <int> e(w+1);
    for(auto &c : d){
        cin >> c;
    }
    
    for(int i = 0 ; i < n ; i++){
        if(d[i] <= w) e[d[i]] = 1;
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
                int s = d[i]+d[j];
            if(s <= w) e[s] = 1;
        }
    }
    
    
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            for(int k = j+1 ; k < n;  k++){
                int s = d[i]+d[j]+d[k];
        if(s <= w) e[s] = 1;
        }
        }
    }

    cout << count(e.begin()+1,e.end(),1) << '\n';
}

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);
    
        solve();
    
    return 0;
}