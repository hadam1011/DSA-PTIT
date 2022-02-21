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
        int n;
        cin >> n;
        vector<ll> a(n), b(n-1);
        For(i,0,n) cin >> a[i];
        For(i,0,n-1) cin >> b[i];
        For(i,0,n-1){
            if(a[i] != b[i]){
                cout << i + 1 << endl; 
                break;
            }
        }
    }
}
