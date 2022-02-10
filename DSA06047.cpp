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
        ll a[5001];
        int kt = 0;
        For(i,0,n){
            cin >> a[i];
            a[i] *= a[i];
        }
        for(int i=n-1; i>=2; i--){
            int l = 0, r = i-1;
            while(l < r){
                if(a[l]+a[r] == a[i]){
                    kt = 1; 
                    break;
                }
                if(a[l]+a[r] < a[i]) l++;
                else r--;
            }
            if(kt) break;
        }        
        if(!kt) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
