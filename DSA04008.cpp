#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, k;
int MOD = 1e9 + 7;

struct MaTran{
    ll f[2][2];
};

MaTran operator*(MaTran a, MaTran b){
    MaTran c;
    FOR(i,0,1){
        FOR(j,0,1){
            c.f[i][j] = 0;
            FOR(k,0,1) c.f[i][j] = (c.f[i][j] + (a.f[i][k] * b.f[k][j])%MOD) % MOD;
        }
    }
    return c;
}

MaTran Solve(MaTran x, int n){
    if(n == 1) return x;
    MaTran a = Solve(x, n/2);
    if(n % 2) return x * a * a; 
    return a * a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    MaTran x;
    tests(){
        cin >> n;
        x.f[0][0] = 0; x.f[0][1] = 1;
        x.f[1][0] = 1; x.f[1][1] = 1;
        MaTran kq = Solve(x, n-1);
        cout << kq.f[1][1] << endl;
    }
}
