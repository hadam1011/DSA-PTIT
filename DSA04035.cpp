#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, k;
int MOD = 1e9 + 7;

ll Solve(ll a, ll b){
    if(!b) return 1;
    ll x = Solve(a, b/2);
    if(b % 2) return ((x%MOD * x)%MOD * a)%MOD;
    return (x%MOD * x)%MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while(1){
        cin >> n >> k;
        if(!n && !k) break;
        cout << Solve(n, k) << endl;
    }
}
