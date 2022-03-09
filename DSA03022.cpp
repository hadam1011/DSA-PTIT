#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, kq;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n];
    For(i,0,n) cin >> a[i];
    sort(a, a+n);
    int res = a[0] * a[1] * a[n-1];
    res = max(res, a[n-1] * a[n-2] * a[n-3]);
    res = max(res, max(a[0] * a[1], a[n-1] * a[n-2]));
    cout << res;
}
