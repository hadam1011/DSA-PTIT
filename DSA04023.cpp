#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        ll res = 0;
        int a[n];
        For(i, 0, n) cin >> a[i];

        sort(a, a + n);
        For(i, 0, n){
            res += lower_bound(a + i + 1, a + n, a[i] + k) - a - i - 1;
        }

        cout << res << endl;
    }
}
