#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, m, k, check[15], a[101][101];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        For(i,0,n){
            For(j,0,m) cin >> a[i][j];
        }
        int res[101][101];
        For(i,0,m) res[0][i] = 1;
        For(i,0,n) res[i][0] = 1;
        For(i,1,n){
            For(j,1,m)
                res[i][j] = res[i-1][j] + res[i][j-1];
        }
        cout << res[n-1][m-1] << endl;
    }   
}
