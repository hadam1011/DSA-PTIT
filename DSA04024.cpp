#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
int MOD = 1e9 + 7;

struct Matrix{
    ll f[11][11];
};

Matrix operator* (Matrix a, Matrix b){
    Matrix c;
    For(i,0,n){
        For(j,0,n){
            c.f[i][j] = 0;
            For(k,0,n){
                c.f[i][j] = (c.f[i][j] + (a.f[i][k] * b.f[k][j]) % MOD) % MOD;
            }
        }
    }
    return c;
}

Matrix Solve(Matrix a, int k){
    if(k == 1) return a;
    Matrix x = Solve(a, k/2);
    if(k % 2) return x * x * a;
    return x * x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        Matrix a, kq;
        For(i,0,n){
            For(j,0,n) cin >> a.f[i][j];
        }
        kq = Solve(a, k);
        ll res = 0;
        For(i,0,n){
            res += kq.f[i][n-1];
            res %= MOD;
        }
        cout << res << endl;
    }
}
