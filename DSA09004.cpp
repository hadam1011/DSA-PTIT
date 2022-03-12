#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v, start;
int visited[1001], adj[1001][1001];
int MOD = 1e9 + 7;

void DFS(int i){
    cout << i << " ";
    visited[i] = 1;
    FOR(j,1,n){
        if(!visited[j] && adj[i][j]) DFS(j);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(adj, 0, sizeof(adj));
        cin >> n >> m >> start;
        For(i,0,m){
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1;
        }
        memset(visited, 0, sizeof(visited));
        DFS(start);
        cout << endl;
    }
}
