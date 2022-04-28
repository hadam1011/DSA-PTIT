#include <bits/stdc++.h>
#include <deque>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
vector<int> adj[100000];
int visited[100000];

void DFS(int i){
    visited[i] = 1;
    for(int x : adj[i]){
        if(!visited[x])
            DFS(x);
    }
}

int check(){
    FOR(i, 1, n){
        if(!visited[i])
            return 0;
    }
    return 1;
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

        DFS(1);

        if(check())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        FOR(i, 1, 100000) adj[i].clear();
    }
}
