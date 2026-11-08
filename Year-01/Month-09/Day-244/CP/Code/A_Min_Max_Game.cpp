// Problem-1
// Codeforces-2263/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> d(n);
    for(int i = 0 ; i < n ; i++){
        cin >> d[i];
    }
    int a = count(d.begin(),d.end(),0);
    int b = count(d.begin(),d.end(),1);
    if(a > b){
        cout << "Elsie" << '\n';
    }
    else if(a < b){
        cout << "Bessie" << '\n';
    }
    else{
        cout << "Bessie" << '\n';

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