#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int n, m, a[501][501], res[501][501];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(res, 0, sizeof(res));
        int kq = 0;
        cin >> n >> m;
        FOR(i, 1, n){
            FOR(j, 1, m) cin >> a[i][j];
        }

        FOR(i, 1, n){
            FOR(j, 1, m){
                if(a[i][j]) res[i][j] = min(res[i - 1][j], min(res[i - 1][j - 1], res[i][j - 1])) + 1;
                kq = max(kq, res[i][j]);
            }
        }

        cout << kq << endl;
    }   
}
