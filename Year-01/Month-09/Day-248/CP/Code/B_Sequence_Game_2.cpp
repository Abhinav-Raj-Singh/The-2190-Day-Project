// Problem-1(method-2)
// Codeforces-1862/B

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int> d;
    for(int i = 0 ; i < n ; i++){
        int r;
        cin >> r;
        if(i == 0){
            
            d.push_back(r);
        }
        else if(d.back() > r){
            d.push_back(1);
            d.push_back(r);
        }
        else{
        d.push_back(r);
        }
    }

    cout << d.size() << '\n';
    for(int i = 0 ; i < d.size() ; i++){
        if(i == d.size()-1){

            cout << d[i] << '\n';
            return ;
            
        }
        cout << d[i] << ' ';
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