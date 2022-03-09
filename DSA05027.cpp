#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, v, a[1001], c[1001], res[1001][1001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> v;
        FOR(i,1,n) cin >> a[i];
        FOR(i,1,n) cin >> c[i];
        memset(res, 0, sizeof(res));
        FOR(i,1,n){
            FOR(j,1,v){
                res[i][j] = res[i-1][j];
                if(j >= a[i])  res[i][j] = max(res[i][j], res[i-1][j-a[i]] + c[i]);
            }
        }
        cout << res[n][v] << endl;
    }
}
