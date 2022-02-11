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
        int a[1001], j = k, kt[1001];
        memset(kt,0,sizeof(kt));
        FOR(i,1,k){
            cin >> a[i];
            kt[a[i]] = 1;
        }
        while(a[j] == n-k+j) j--;
        a[j]++;
        FOR(i,j+1,k) a[i] = a[i-1] + 1;
        if(!j) cout << k << endl;
        else{
            cnt = 0;
            FOR(i,1,k) if(kt[a[i]] == 0) cnt++;   
            cout << cnt << endl;
        }
    }
}
