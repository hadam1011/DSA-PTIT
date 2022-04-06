#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int MOD = 1e9 + 7;
int n, F[10005];
string s;

void tinh(){
    FOR(i, 1, 10000){
        F[i] = i;
        FOR(j, 1, sqrt(i)){
            F[i] = min(F[i], F[i - j * j] + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tinh();
    tests(){
        cin >> n;
        cout << F[n] << endl;
    }
}
