#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, a[1001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int sum = 0, sum1 = 0, res;
        For(i,0,n){
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a+n);
        if(k <= n/2){
            For(i,0,k) sum1 += a[i];
            res = sum - 2*sum1;
        }else{
            For(i,n-k,n) sum1 += a[i];
            res = 2*sum1 - sum;
        }
        cout << res << endl;
    }
}
