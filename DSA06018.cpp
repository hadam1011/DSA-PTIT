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
        int a[100001], check[100001], res = 0;
        memset(check,0,sizeof(check));
        For(i,0,n){
            cin >> a[i];
            check[a[i]] = 1;
        }
        sort(a,a+n);
        FOR(i,a[0],a[n-1]){
            if(!check[i]) res++;
        }
        cout << res << endl;
    }
}   
