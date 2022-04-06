#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int MOD = 1e9 + 7;
int n, m, u;
int visited[1005];
vector<int> adj[1005];

struct edge{
    int head, final;
};
vector<edge> T;

edge CreateEdge(int x, int y){
    edge res;
    res.head = x;
    res.final = y;
    return res;
}

void TreeBFS(int i){
    queue<int> q;
    q.push(i);
    visited[i] = 1;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        for(int j : adj[x]){
            if(!visited[j]){
                q.push(j);
                visited[j] = 1;
                edge k = CreateEdge(x, j);
                T.push_back(k);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(visited, 0, sizeof(visited));
        cin >> n >> m >> u;
        while(m--){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        TreeBFS(u);

        if(T.size() < n - 1) cout << -1 << endl;
        else{
            For(i, 0, T.size()) cout << T[i].head << " " << T[i].final << endl;
        }

        T.clear();
        FOR(i, 1, 1005) adj[i].clear();
    }
}   
