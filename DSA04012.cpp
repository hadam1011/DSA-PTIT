#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, k;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int P[101], Q[101], res[201];
        For(i,0,n) cin >> P[i];
        For(i,0,k) cin >> Q[i];
        memset(res,0,sizeof(res));
        For(i,0,n){
            For(j,0,k){
                res[i+j] += P[i] * Q[j];
            }
        }
        For(i,0,n+k-1) cout << res[i] << " ";
        cout << endl;
    }
}
