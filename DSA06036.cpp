#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        ll a[5001], kt = 0, k;
        cin >> n >> k;
        For(i,0,n) cin >> a[i];
        sort(a,a+n);
        For(i,0,n-2){
            For(j,i+1,n-1){
                int vt = lower_bound(a+j+1, a+n, k-a[i]-a[j]) - a;
                if(a[i] + a[j] + a[vt] == k){
                    kt = 1;
                    break;
                }
            }
            if(kt) break;
        }
        if(kt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
