// Problem-2
// Atcoder-abc241_b


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , m;
    cin >> n >> m;
    vector <long long> d(n);
    vector <long long> e(m);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    for(int i = 0 ; i < m ; i++){ 
        cin >> e[i];
    }
    for(int i = 0 ; i < m ; i++){
        if(d[i] != e[i]){
            if(count(e.begin(),e.end(),e[i]) > count(d.begin(),d.end(),e[i])){
                cout << "No" << '\n';
                return;
            }
        }
    }
    cout << "Yes" << '\n';
}

int main(){

   
        solve();

    return 0;
}