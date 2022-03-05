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

struct Matrix{
    ll f[2][2];
};

Matrix operator* (Matrix a, Matrix b){
    Matrix c;
    For(i,0,2){
        For(j,0,2){
            c.f[i][j] = 0;
            For(k,0,2) c.f[i][j] = (c.f[i][j] + (a.f[i][k] * b.f[k][j])%MOD) % MOD;
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
    Matrix x;
    tests(){
        cin >> n;   
        x.f[0][0] = 0; x.f[0][1] = 1;
        x.f[1][0] = 1; x.f[1][1] = 1;
        Matrix kq = Solve(x, n-1);
        cout << kq.f[1][1] << endl;
    }
}
