#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll len[100], n, k;

char Solve(ll n, ll k){
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= len[n-2]) return Solve(n-2, k);
    return Solve(n-1, k-len[n-2]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    len[1] = 1; len[2] = 1;
    For(i,3,93) len[i] = len[i-1] + len[i-2];
    tests(){
        cin >> n >> k;
        cout << Solve(n,k) << endl;
    }
}
