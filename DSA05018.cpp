#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, res[1001][1001];
string s;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(res, 0, sizeof(res));
        cin >> s;
        n = s.size();

        int kq = 1;
        For(i,0,n) res[i][i] = 1;
        FOR(i,2,n){
            int l = 0, r = i - 1;
            while(r < n){
                if(s[l] == s[r]){
                    if(l + 1 == r) res[l][r] = 1;
                    else res[l][r] = res[l+1][r-1];
                }

                if(res[l][r]) kq = max(kq, i);
                r++; l++;
            }
        }
        
        cout << kq << endl;
    }
}
