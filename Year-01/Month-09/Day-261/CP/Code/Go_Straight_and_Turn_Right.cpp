// Problem-2
// Atcoder-abc244_b

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int d = 0 ;
    int x = 0;
    int y = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'R'){
            if(d == 3){
                d = 0;
            }
            else{
                d++;
            }
        }
        else{
            if(d == 0){
                x++;
            }
            else if(d == 1){
                y--;
            }
            else if(d == 2){
                x--;
            }
            else{
                y++;
            }
        }
    }
    cout << x << ' ' << y << '\n';
}

int main(){
    
    ios_base::sync_with_stdio(0);cin.tie(0);
   
        solve();

    return 0;
}