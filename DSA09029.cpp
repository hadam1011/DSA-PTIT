#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u ,v, kt;
int visited[1001];
int MOD = 1e9 + 7;
vector<int> adj[1001];

void Hamilton(int i, int cnt){
    if(cnt == n){
        kt = 1;
        return;
    }

    for(int x : adj[i]){
        if(!visited[x]){
            visited[x] = 1;
            Hamilton(x, cnt + 1);
            visited[x] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        For(i, 0, m){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        kt = 0;
        FOR(i, 1, n){
            memset(visited, 0, sizeof(visited));
            visited[i] = 1;
            Hamilton(i, 1);
        }

        cout << kt << endl;

        FOR(i, 1, 1000) adj[i].clear();
    }
}
