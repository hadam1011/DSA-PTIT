#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[50], j = k, check[50];
        memset(check, 0, sizeof(check));
        FOR(i,1,k){
            cin >> a[i];
            check[a[i]] = 1;
        }
        while(a[j] == n-k+j && j > 0) j--;
        if(j == 0) cout << k << endl;
        else{
            a[j]++; cnt = 0;
            FOR(i,j+1,k) a[i] = a[i-1] + 1;
            FOR(i,1,k){
                if(!check[a[i]]) cnt++;
            }
            cout << cnt << endl;
        }
    }
}
