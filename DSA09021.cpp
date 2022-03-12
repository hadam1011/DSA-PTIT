#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v;
int MOD = 1e9 + 7;
vector<int> adj[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    FOR(i,1,n){
        FOR(j,1,n){
            cin >> u;
            if(u) adj[i].push_back(j);
        }
    }
    FOR(i,1,n){
        For(j,0,adj[i].size()) cout << adj[i][j] << " ";
        cout << endl;
    }
}
