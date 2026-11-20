// Problem-2
// Codeforces-1788/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> d(n);
    for(int i = 0 ; i < n ;i++){
        cin >> d[i];
    }
    int one = count(d.begin(),d.end(),1);
    int two = count(d.begin(),d.end(),2);
    if(two % 2 != 0){
        cout << -1 << '\n';
        return ;
    }
    else{
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(d[i] == 2){
                ans++;
            }
            if(ans == two/2){
                if(ans == 0){
                    cout << 1 << '\n';
                    return;
                }
                cout << i+1 << '\n';
                return;
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