#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, res[1001][1001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(res, 0, sizeof(res));
        string s1, s2;
        cin >> s1 >> s2;
        n = s1.size(); m = s2.size();
        FOR(i,1,n){
            FOR(j,1,m){
                if(s1[i-1] == s2[j-1]) res[i][j] = res[i-1][j-1] + 1;
                else res[i][j] = max(res[i-1][j], res[i][j-1]);
            }
        }
        cout << res[n][m] << endl;
    }
}
