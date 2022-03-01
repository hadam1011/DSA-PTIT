#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, k;
int MOD = 123456789;

ll Solve(int n, ll k){
    if(k == 0) return 1;
    ll x = Solve(n, k/2);
    if(k % 2) return (n * (x * x%MOD)) % MOD;
    return x * x%MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        cout << Solve(2, n-1) << endl;
    }
}
