#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
ll n, m, k, check[15];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        ll a[n], res = 0;
        map<ll, int> mp;
        For(i,0,n){
            cin >> a[i];
            mp[a[i]]++;
        }
        For(i,0,n){
            if(mp.count(k - a[i])) res += mp[k - a[i]];
            if(k%2 == 0 && k/2 == a[i]) res--;
        }
        cout << res/2 << endl;
    }   
}
