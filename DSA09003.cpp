#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        vector<int> adj[1001];
        For(i,0,m){
            cin >> u >> v;
            adj[u].push_back(v);
        }
        FOR(i,1,n){
            cout << i << ": ";
            for(int x : adj[i]) cout << x << " ";
            cout << endl;
        }
    }
}
