#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        ll a[n], res = 0;
        For(i,0,n) cin >> a[i];
        sort(a,a+n);
        For(i,0,n-2){
            For(j,i+1,n-1){
                int r = lower_bound(a, a+n, k-a[i]-a[j]) - a;
                if(r <= j) break;
                res += r - j - 1;
            }
        }
        cout << res << endl;    
    }
}
