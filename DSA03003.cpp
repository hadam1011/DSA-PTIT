#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, res;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        ll a[n];
        For(i,0,n) cin >> a[i];
        sort(a, a+n);
        res = 0;
        For(i,0,n){
            res = (res + a[i] * i) % MOD;
        }
        cout << res << endl;
    }
}
