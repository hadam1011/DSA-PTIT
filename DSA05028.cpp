#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, res[105][105];
string s1, s2;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        memset(res, 0, sizeof(res));

        FOR(i, 0, n){
            FOR(j, 0, m){
                if(i == 0 || j == 0)
                    res[i][j] = i + j;
                else if(s1[i - 1] == s2[j - 1])
                    res[i][j] = res[i - 1][j - 1];
                else
                    res[i][j] = min(res[i - 1][j - 1], min(res[i - 1][j], res[i][j - 1])) + 1;
            }
        }

        cout << res[n][m] << endl;
    }
}
