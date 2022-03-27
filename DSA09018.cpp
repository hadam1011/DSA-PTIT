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

void DFS(int i){
    visited[i] = 1;
    for(int x : adj[i]){
        if(!visited[x]) DFS(x);
    }
}

int check(){
    FOR(i,1,n){
        if(!visited[i]) return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        while(m--){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        FOR(i,1,n){
            memset(visited, 0, sizeof(visited));
            visited[i] = 1;
            if(i == 1) DFS(2);
            else DFS(1);

            if(check()) cout << i << " ";
        }

        cout << endl;
        FOR(i,1,1000) adj[i].clear();
    }
}
