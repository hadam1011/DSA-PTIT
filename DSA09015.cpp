#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
int MOD = 1e9 + 7;
vector<int> adj[1000];
int visited[1000];

int DFS(int u, int previous){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]) DFS(x, u);
        else if(x != previous) return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        int kt = 0;
        cin >> n >> m;
        while(m--){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }

        FOR(i,1,n){
            memset(visited, 0, sizeof(visited));
            if(DFS(i, 0)){
                kt = 1;
                break;
            }
        }

        if(kt) cout << "YES" << endl;
        else cout << "NO" << endl;
        FOR(i,1,1000) adj[i].clear();
    }
}
