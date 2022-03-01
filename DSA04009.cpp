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
    ll f[15][15];
};

MaTran operator*(MaTran a, MaTran b){
    MaTran c;
    For(i,0,n){
        For(j,0,n){
            c.f[i][j] = 0;
            For(k,0,n) c.f[i][j] = (c.f[i][j] + (a.f[i][k]%MOD * b.f[k][j]%MOD) % MOD) % MOD;
        }
    }
    return c;
}

MaTran Solve(MaTran a, int n){
    if(n == 1) return a;
    MaTran x = Solve(a, n/2);
    if(n % 2) return a * x * x; 
    return x * x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        MaTran a;
        For(i,0,n){
            For(j,0,n) cin >> a.f[i][j];
        }
        MaTran kq = Solve(a, k);
        For(i,0,n){
            For(j,0,n) cout << kq.f[i][j] << " ";
            cout << endl;
        }
    }
}
