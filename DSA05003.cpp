#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, p, res[101][101][101];
string x, y, z;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(res, 0, sizeof(res));
        cin >> m >> n >> p;
        cin >> x >> y >> z;

        FOR(i,1,m){
            FOR(j,1,n){
                FOR(k,1,p){
                    if(x[i-1] == y[j-1] && y[j-1] == z[k-1]) res[i][j][k] = res[i-1][j-1][k-1] + 1;
                    else res[i][j][k] = max(res[i][j][k-1], max(res[i-1][j][k], res[i][j-1][k]));
                }
            }
        }

        cout << res[m][n][p] << endl;
    }   
}
