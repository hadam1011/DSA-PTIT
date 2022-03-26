#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        ll a[n], b[n];
        For(i,0,n) cin >> a[i];
        For(i,0,n) cin >> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<ll>());

        ll res = 0;
        For(i,0,n) res += a[i] * b[i];
        cout << res << endl;
    }
}
