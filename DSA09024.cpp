#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v, start;
int visited[1001], a[1001][1001];
int MOD = 1e9 + 7;

void BFS(int i){
    queue<int> q;
    q.push(i);
    visited[i] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";
        FOR(j,1,n){
            if(!visited[j] && a[x][j]){
                q.push(j);
                visited[j] = 1;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(a, 0, sizeof(a));
        memset(visited, 0, sizeof(visited));
        cin >> n >> m >> start;
        For(i,0,m){
            cin >> u >> v;
            a[u][v] = 1;
        }
        BFS(start);
        cout << endl;
    }
}
