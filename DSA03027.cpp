#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll res = 0;
    cin >> n;
    For(i, 0, n){
        cin >> m;
        if(m > 0) res += 2 * m;
    }

    cout << res << endl;
}
