#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
string s;

int count(int b[], int m, int d[], int x){
    if(x == 0) return 0;
    if(x == 1) return d[0];
    int tmp = upper_bound(b, b+m, x) - b;
    long ans = m - tmp;
    ans += d[0] + d[1];
    if(x == 2) ans -= (d[3] + d[4]);
    if(x == 3) ans += d[2];
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        int a[n], b[m];
        For(i, 0, n) cin >> a[i];
        int d[1000] = {0};
        For(i, 0, m){
            cin >> b[i];
            if(b[i] < 5) d[b[i]]++;
        }

        sort(b, b + m);
        long res = 0;
        For(i, 0, n){
            res += count(b, m, d, a[i]);
        }
        cout << res << endl;
    }
}
