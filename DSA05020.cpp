#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, m, res[1001][1001], a[1001][1001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        FOR(i,1,n){
            FOR(j,1,m) cin >> a[i][j];
        }
        res[1][1] = a[1][1];
        FOR(i,1,n){
            FOR(j,1,m){
                if(i == 1) res[i][j] = res[i][j-1] + a[i][j];
                else if(j == 1) res[i][j] = res[i-1][j] + a[i][j];
                else res[i][j] = min(res[i-1][j], min(res[i][j-1], res[i-1][j-1])) + a[i][j];
            }
        }
        cout << res[n][m] << endl;
    }
}
