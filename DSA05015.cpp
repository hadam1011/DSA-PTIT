#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, k, res[1001][1001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        memset(res, 0, sizeof(res));
        FOR(i,1,n){
            FOR(j,1,k){
                if(i > j){
                    if(j == 1) res[i][j] = i;
                    else res[i][j] = (res[i][j-1] * (i-j+1)) % MOD;
                }
            }
        }
        cout << res[n][k] << endl;
    }
}
