#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int MOD = 1e9 + 7;
int n, F[105] ,x ,y ,z;
string s;

int Solve(){
    memset(F, 0, sizeof(F));
    F[1] = x;
    FOR(i, 2, n){
        if(i % 2 == 0)
            F[i] = min(F[i - 1] + x, F[i / 2] + z);
        else
            F[i] = min(F[i - 1] + x, F[(i + 1) / 2] + z + y);
    }

    return F[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> x >> y >> z;
        cout << Solve() << endl;
    }
}   
