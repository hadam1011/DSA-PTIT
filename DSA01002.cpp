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
        cin >> n >> k;
        int a[1001], j = k;
        FOR(i,1,k) cin >> a[i];
        while(a[j] == n-k+j) j--;
        a[j]++;
        FOR(i,j+1,k) a[i] = a[i-1] + 1;
        if(j) FOR(i,1,k) cout << a[i] << " ";
        else FOR(i,1,k) cout << i << " ";
        cout << endl;
    }
}
