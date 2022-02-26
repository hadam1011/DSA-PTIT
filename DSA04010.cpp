#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, a[105], res;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        For(i,0,n) cin >> a[i];
        int sum = 0; res = INT_MIN;
        For(i,0,n){
            if(sum + a[i] > 0){
                sum += a[i];
                res = max(sum, res);
            }
            else sum = 0;
        }
        cout << res << endl;
    }
}
