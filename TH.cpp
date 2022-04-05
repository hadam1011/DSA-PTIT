#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int MOD = 1e9 + 7;
ll n, k;
string s;

int solve(string s){
    n = s.size();
    int F[n + 1][n + 1];
    memset(F, 0, sizeof(F));

    FORD(i, n - 2, 0){
        For(j, i + 1, n){
            if(s[i] == s[j])
                F[i][j] = F[i + 1][j - 1];
            else
                F[i][j] = min(F[i + 1][j], F[i][j - 1]) + 1;
        }
    }

    return F[0][n - 1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        cout << solve(s) << endl;
    }
}
