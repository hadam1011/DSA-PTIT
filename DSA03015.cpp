
#include <bits/stdc++.h>
using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, s, m;
int MOD = 1e9 + 7;

void Solve(){
    int lt = 0, res = 0;
    m *= s;
    FOR(i,1,s){
        if(i % 7 == 0) continue;
        res++;
        lt += n;
        if(lt >= m) break;
    }
    if(lt < m) cout << -1 << endl;
    else cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> s >> m;
        Solve();
    }
}
