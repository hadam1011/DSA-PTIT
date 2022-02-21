#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(ll i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
const ll MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        ll n, m, k, res, cnt = 1;
        cin >> n >> m >> k;
        ll a[n], b[m], i ,j;
        For(i,0,n) cin >> a[i];
        For(i,0,m) cin >> b[i];
        i = 0; j = 0;
        while(cnt <= k){
            if(a[i] <= b[j] && i < n){
                res = a[i];
                i++;
            }else{
                res = b[j];
                j++;
            } 
            cnt++;
        }
        cout << res << endl;
    }
}
