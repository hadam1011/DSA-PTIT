#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, a[1001], res[1001], kq = 0;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    For(i,0,n) cin >> a[i];
    For(i,0,n){
        res[i] = 1;
        For(j,0,i){
            if(a[i] > a[j]) res[i] = max(res[i], res[j] + 1);
        }
        kq = max(kq, res[i]);
    }    
    cout << kq;
}
