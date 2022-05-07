#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, k, u, v, y;
int visited[1005], vt[1005] = {};
string s;
vector<int> adj[1005];
vector<int> path[1005];

void DFS(int u, int i){
    visited[u] = 1;
    for(int x : adj[u]){
        if(!visited[x]){
            path[x].push_back(i);
            DFS(x, i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k >> n >> m;
    For(i, 0, k){
        cin >> u;
        vt[u] = 1;
    }
    For(i, 0, m){
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int res = 0;
    FOR(i, 1, n){
        if(vt[i]){
            memset(visited, 0, sizeof(visited));
            DFS(i, i);
        }
    }
    
    FOR(i, 1, n){
        if((path[i].size() + vt[i]) == k){
            res++;
        }
    }

    cout << res;
}
