#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v, k;
vector<int> adj[1005];
int visited[1005];

struct edge{
    int d, c;
};
vector<edge> T;

void DFS(int i){
    visited[i] = 1;
    for(int x : adj[i]){
        if(!visited[x]){
            edge tmp;
            tmp.d = i;
            tmp.c = x;
            T.push_back(tmp);
            DFS(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(visited, 0, sizeof(visited));
        cin >> n >> m >> k;
        For(i, 0, m){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        DFS(k);

        if(T.size() < n - 1)
            cout << -1 << endl;
        else{
            For(i, 0, T.size()){
                cout << T[i].d << " " << T[i].c << endl;
            }
        }

        T.clear();
        FOR(i, 1, 1005) adj[i].clear();
    }
}
