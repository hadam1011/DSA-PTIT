#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
int visited[1001], a[1001][1001];
int MOD = 1e9 + 7;

void DFS(int i){
    visited[i] = 1;
    FOR(j,1,n){
        if(!visited[j] && a[i][j]) DFS(j);
    }
}

int Count(){
    memset(visited, 0, sizeof(visited));
    int cnt = 0;
    FOR(i,1,n){
        if(!visited[i]){
            DFS(i);
            cnt++;
        }
    }    
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(a, 0, sizeof(a));
        cin >> n >> m;
        For(i,0,m){
            cin >> u >> v;
            a[u][v] = 1;
            a[v][u] = 1;
        }
        int cnt = Count();
        FOR(i,1,n){
            FOR(j,i+1,n){
                int kt = 0;
                if(a[i][j]){
                    a[i][j] = 0; a[j][i] = 0;
                    kt = Count();
                    a[i][j] = 1; a[j][i] = 1;
                }
                if(kt > cnt) cout << i << " " << j << " ";
            }
        }
        cout << endl;
    }
}
