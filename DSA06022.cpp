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
        int a[1005], min2 = -1;
        For(i,0,n) cin >> a[i];
        sort(a,a+n);
        For(i,0,n){
            if(a[i] != a[0]){
                min2 = a[i];
                break;
            }
        }
        if(min2 != -1) cout << a[0] << " " << min2 << endl;
        else cout << -1 << endl;
    }
}   

