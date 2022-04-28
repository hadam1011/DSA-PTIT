#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v, k, cnt;
vector<int> adj[100005];
int visited[100005];

void DFS(int i){
    visited[i] = 1;
    for(int x : adj[i]){
        if(!visited[x]){
            cnt++;
            DFS(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(visited, 0, sizeof(visited));
        cin >> n >> m;
        For(i, 0, m){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int res = 0;
        FOR(i, 1, n){
            if(!visited[i]){
                cnt = 1;
                DFS(i);
                res = max(res, cnt);            
            }
        }

        cout << res << endl;

        FOR(i, 1, 100005) adj[i].clear();
    }
}
