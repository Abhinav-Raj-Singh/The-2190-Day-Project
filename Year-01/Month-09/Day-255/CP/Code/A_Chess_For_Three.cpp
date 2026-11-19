// Problem-1
// Codeforces-1973/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> d(3);
    for(int i = 0 ; i < 3 ; i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    int r = accumulate(d.begin(),d.end(),0);
    if(r% 2 != 0){
        cout << -1 << '\n';
    }
    else{
    int ans = 0;
        int i = 1;
        while((d[0] != 0 || d[1] != 0)){
        sort(d.begin(),d.end());

            if(i % 2 != 0){
                d[1]--;
                d[2]--;
                ans++;
                i++;
            }
            else{
                
                d[1]--;
                d[2]--;
                ans++;
                i++;
            }
        }
        cout << ans << '\n';
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