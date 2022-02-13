#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, check[15];
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[n];
        For(i,0,n) cin >> a[i];
        sort(a,a+n);
        ll res = 0;
        For(i,0,n-1){
            cnt = lower_bound(a, a+n, a[i]+k) - a;
            res += cnt - i - 1;
        }
        cout << res << endl;
    }   
}
