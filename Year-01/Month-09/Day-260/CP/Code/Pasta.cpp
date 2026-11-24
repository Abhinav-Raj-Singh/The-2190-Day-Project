// Problem-2(method-2)
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
    bool flag = false;
    for(int i = 0 ; i < m ; i++){
        flag = false;
        for(int j = 0 ; j < n ; j++){
            if(e[i] == d[j]){
                d[j] = -1;
                flag = true;
                break;
            }
            
        }
        if(flag == false){
            cout << "No" << '\n';
            return;
        }
    }
    cout << ("Yes") << '\n';
}

int main(){

   
        solve();

    return 0;
}