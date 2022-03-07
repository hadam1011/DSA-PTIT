#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, a[1001], len[1001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int res = 0;
        FOR(i,1,n) cin >> a[i];
        FOR(i,1,n){
            len[i] = 1;
            For(j,1,i){
                if(a[i] >= a[j]) len[i] = max(len[i], len[j] + 1);
            }
            res = max(res, len[i]);
        }
        cout << n - res << endl;
    }
}
