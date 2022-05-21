#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v;
int parent[1001], isLeaf[1001], visited[1001];
vector<int> path;
vector<int> leaf[1001];
vector<int> adj[1001];

void DFS(int i){
    visited[i] = 1;
    if(isLeaf[i]){
        int val = i;
        while(val){
            path.push_back(val);
            val = parent[val];
        }

        reverse(path.begin(), path.end());
        for(int x : path) leaf[i].push_back(x);
        path.clear();
    }else{
        for(int x : adj[i]){
            if(!visited[x])
                DFS(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        cin >> n;
        FOR(i, 1, n) isLeaf[i] = 1;
        For(i, 0, n - 1){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            parent[v] = u;
            isLeaf[u] = 0;
        }

        DFS(1);

        FOR(i, 1, n){
            if(isLeaf[i]){
                for(int x : leaf[i]) cout << x << " ";
                cout << endl;
            }
        }

        FOR(i, 1, 1000){
            adj[i].clear();
            leaf[i].clear();
        }
    }
}
