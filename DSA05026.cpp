#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, C, w[105], res[105][25005];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> C >> n;
    FOR(i,1,n) cin >> w[i];
    memset(res, 0, sizeof(res));
    FOR(i,1,n){
        FOR(j,1,C){
            res[i][j] = res[i-1][j];
            if(w[i] <= j) res[i][j] = max(res[i][j], res[i-1][j-w[i]] + w[i]);
        }
    }
    cout << res[n][C];
}
