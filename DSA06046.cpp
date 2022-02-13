#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[n], res = INT_MAX;
        For(i,0,n) cin >> a[i];
        sort(a,a+n);
        For(i,0,n-1){
            res = min(res, a[i+1] - a[i]);
        }
        cout << res << endl;
    }
}
