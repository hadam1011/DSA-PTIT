#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v, q, res;
int visited[1001];
vector<int> adj[1001];

int Distance(int u, int v){
    memset(visited, 0, sizeof(visited));
    queue<pair<int, int>> q;
    visited[u] = 1;
    q.push({u, 0});

    while(!q.empty()){
        pair<int, int> x = q.front();
        q.pop();
        if(x.first == v){
            res = x.second;
            break;
        }

        for(int next : adj[x.first]){
            if(!visited[next]){
                visited[next] = 1;
                q.push({next, x.second + 1});
            }
        }
    }

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        For(i, 0, n - 1){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cin >> q;
        while(q--){
            cin >> u >> v;
            cout << Distance(u, v) << endl;
        }

        FOR(i, 1, 1000) adj[i].clear();
    }
}
