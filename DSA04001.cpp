#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
const ll MOD = 1e9+7;

ll Solve(int n, int k){
    if(k == 0) return 1;
    ll x = Solve(n, k/2); 
    ll ans = (x * x) % MOD;
    if(k % 2) return (ans * n) % MOD;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        int n, k;
        cin >> n >> k;
        cout << Solve(n,k) << endl;
    }
}
