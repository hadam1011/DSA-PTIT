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
        int a[n];
        For(i,0,n) cin >> a[i];
        ll res = INT_MAX;
        For(i,0,n-1){
            For(j,i+1,n){
                if(abs(a[i] + a[j]) < abs(res))
                    res = a[i] + a[j];
            }
        }
        cout << res << endl;
    }
}   

