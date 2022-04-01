#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
ll n, m, res[50][50];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(res, 0, sizeof(res));
        cin >> n >> m;

        FOR(i, 0, n) res[i][m] = 1;
        FOR(i, 0, m) res[n][i] = 1;

        FORD(i, n-1, 0){
            FORD(j, m-1, 0){
                res[i][j] = res[i][j + 1] + res[i + 1][j];
            }
        }

        cout << res[0][0] << endl;
    }   
}
