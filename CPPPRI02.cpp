//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, res = 0; cin >> n;
        for(ll i = 2; i * i <= n; ++i){
            while(n % i == 0) {
                res = i;
                n /= i;
            }
        }
        if ( n > 1) res =  n; 
        cout << res << "\n";
    }
    return 0;
}
