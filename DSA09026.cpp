#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v, kt, bd;
int visited[1001], truoc[1001];
int MOD = 1e9 + 7;
vector<int> adj[1001];

void BFS(int i){
    queue<int> q;
    q.push(i);
    visited[i] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int k : adj[x]){
            if(!visited[k]){
                truoc[k] = x;
                q.push(k);
                visited[k] = 1;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(truoc, 0, sizeof(truoc));
        memset(visited, 0, sizeof(visited));
        cin >> n >> m >> bd >> kt;
        For(i,0,m){
            cin >> u >> v;
            adj[u].push_back(v);
        }

        BFS(bd);
        if(!truoc[kt]) cout << -1;
        else{
            stack<int> stc;
            while(kt){
                stc.push(kt);
                kt = truoc[kt];
            }
            while(!stc.empty()){
                cout << stc.top() << " ";
                stc.pop();
            }
        }
        cout << endl;
        FOR(i,1,1000) adj[i].clear();
    }
}
