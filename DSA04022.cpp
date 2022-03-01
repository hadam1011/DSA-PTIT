#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll len[100], n, k;

ll Solve(ll n, ll k){
    if(n == 1) return 1;
    if(k == len[n-1] + 1) return n;
    if(k < len[n-1]) return Solve(n-1, k);
    return Solve(n-1, k-len[n-1]-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    len[1] = 1;
    For(i,2,51) len[i] = len[i-1]*2 + 1;
    tests(){
        cin >> n >> k;
        cout << char(Solve(n,k) + 'A' - 1) << endl;
    }
}
