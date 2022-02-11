#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        ll a[n], ln = 0;
        FOR(i,1,n){
            cin >> a[i];
            ln = max(ln,a[i]);
        }
        int vt = 0;
        FOR(i,1,n){
            if(a[i] == ln){
                k = i;
                while(a[k] == ln && k <= n){
                    vt = k;
                    k++;
                }
                break;
            }
        }
        if(vt == n) vt = 0;
        cout << vt << endl;
    }
}
