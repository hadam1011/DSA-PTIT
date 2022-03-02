#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        ll res[101];
        res[1] = 1; res[2] = 2; res[3] = 4;
        FOR(i,4,n) res[i] = res[i-1] + res[i-2] + res[i-3];
        cout << res[n] << endl;
    }
}
