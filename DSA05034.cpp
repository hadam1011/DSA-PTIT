#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, x;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int res[n+1];
        memset(res,0,sizeof(res));

        res[1] = 1; res[0] = 1;
        FOR(i,2,n){
            if(i <= k) x = 0;
            else x = i - k;
            For(j,x,i){
                res[i] += res[j];
                res[i] %= MOD;
            }
        }

        cout << res[n] << endl;
    }
}
