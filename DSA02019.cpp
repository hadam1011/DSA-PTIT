#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, kq, visited[20][20];
int MOD = 1e9 + 7;

void DFS(int u, int len){
    kq = max(kq, len);
    For(i,0,n){
        if(visited[u][i]){ 
            visited[u][i] = 0; visited[i][u] = 0;
            DFS(i, len+1);
            visited[u][i] = 1; visited[i][u] = 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        memset(visited, 0, sizeof(visited));
        For(i,0,m){
            int x, y; 
            cin >> x >> y;
            visited[x][y] = 1; visited[y][x] = 1;
        }
        kq = 0;
        For(i,0,n) DFS(i, 0);
        cout << kq << endl;
    }
}
