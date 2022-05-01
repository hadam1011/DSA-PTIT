#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v, s, len;
vector<pair<int, int>> adj[1001];

void Dijkstra(int s){
    vector<ll> d(n + 1, 1e9);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});

    while(!q.empty()){
        pair<int, int> x = q.top();
        q.pop();
        u = x.second;
        len = x.first;  
        if(len > d[u]) continue;
        
        for(auto it : adj[u]){
            int v = it.first;
            int w = it.second;
            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }

    FOR(i, 1, n)
        cout << d[i] << " ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m >> s;
        For(i, 0, m){
            int x, y, w;
            cin >> x >> y >> w;
            adj[x].push_back({y, w});
            adj[y].push_back({x, w});
        }

        Dijkstra(s);
        FOR(i, 1, 1001) adj[i].clear();
        cout << endl;
    }
}
