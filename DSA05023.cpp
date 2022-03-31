#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
string s;
int MOD = 1e9 + 7;

ll to_int(string s){
    ll res = 0;
    For(i,0,s.size()) res = res*10 + (s[i]-'0');
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        ll res = 0;
        n = s.length();

        FOR(i,1,n){ 
            FOR(j,0,n-i){
                string tmp = s.substr(j,i);
                res += to_int(tmp);
            }
        }

        cout << res << endl;
    }   
}
