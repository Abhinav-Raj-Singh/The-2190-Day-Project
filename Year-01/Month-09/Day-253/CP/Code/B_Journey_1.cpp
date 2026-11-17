// Problem-1
// Codeforces-2051/B


#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , a,b,c;
    cin >> n >> a >> b >> c ;
    long long d = (a+b+c);
    long long ans = (n/d)*d;
    long long i = (n/d)*3;
    if(d > n){
        int t = 3;
        ans = 0;
        i = 0;
        while(ans < n){
            if(t == 3){
                ans += a;
                i++;
                t--; 
            }
            else if(t == 2){
                ans += b;
                i++;
                t--; 
                
            }
            else{
                ans += c;
                i++;
                t--; 
                
            }
        }
        cout << i << '\n';
        return ;
    }
    else{
        if(d == n){
            cout << 3 << '\n';
            return ;
        }
        else{
            int t = 3;
            while(ans < n){
                if(t == 3){
                    ans += a;
                    t--;
                    i++;
                }
                else if(t == 2){
                    ans += b;
                    t--;
                    i++;
                }
                else{
                    ans += c;
                    t--;
                    i++;
                    
                }
            }
            cout << i << '\n';
            return ;
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