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
        if(!visited[i]) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        int kt = 1;
        cin >> n >> m;
        while(m--){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }

        FOR(i,1,n){
            memset(visited, 0, sizeof(visited));
            DFS(i);
            if(check() == 0){
                kt = 0;
                break;
            }
        }

        if(kt) cout << "YES" << endl;
        else cout << "NO" << endl;

        FOR(i,1,1000) adj[i].clear();
    }
}
