#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[101], res = 0;
        For(i,0,n) cin >> a[i];
        For(i,0,n-1){
            For(j,i+1,n){
                if(a[i] + a[j] == k) res++;
            }
        }
        cout << res << endl;
    }
}   

