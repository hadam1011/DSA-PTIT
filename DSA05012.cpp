#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
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
    FOR(i,0,1000){
        FOR(j,0,i){
            if(i == j || j == 0) res[i][j] = 1;
            else{
                res[i][j] = (res[i-1][j] + res[i-1][j-1]) % MOD;
            }
        }
    }
    tests(){
        cin >> n >> k;
        cout << res[n][k] << endl;
    }
}
