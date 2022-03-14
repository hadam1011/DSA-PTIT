#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        ll a[n+1] ,res[n+1];
        memset(res, 0, sizeof(res));
        FOR(i,1,n) cin >> a[i];
        res[1] = a[1]; 
        res[2] = a[2]; 
        res[3] = max(a[2], a[1] + a[3]);
        FOR(i,4,n){
            res[i] = max(res[i-2], res[i-3]) + a[i];
        }
        sort(res, res+n+1);
        cout << res[n] << endl;
    }
}
