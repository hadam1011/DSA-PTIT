#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, check[20];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[n], j = k;
        memset(a,0,sizeof(a));
        FOR(i,1,k) cin >> a[i];
        while(a[j] == a[j-1] + 1) j--;
        if(!j){
            for(int i=k; i>=j; i--) a[i] = n - k + i;
        }else{
            a[j]--;
            FOR(i,j+1,k) a[i] = n - k + i;
        }
        FOR(i,1,k) cout << a[i] << " ";
        cout << endl;
    }
}
