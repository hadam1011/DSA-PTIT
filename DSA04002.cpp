#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
const ll MOD = 1e9+7;

ll Solve(ll n, ll k){
    if(k == 0) return 1;
    ll x = Solve(n, k/2) % MOD; 
    ll ans = (x * x) % MOD;
    if(k % 2) return (ans * n%MOD) % MOD;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        ll n, tmp = 0;
        cin >> n;
        ll m = n;
        while(n){
            tmp = tmp*10 + n%10;
            n /= 10;
        }
        cout << Solve(m, tmp) << endl;
    }
}
