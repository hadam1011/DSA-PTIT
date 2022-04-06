#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int MOD = 1e9 + 7;
int n, u, v;
int visited[1005], a[1005][1005];

void DFS(int i){
    visited[i] = 1;
    FOR(j, 1, n){
        if(a[i][j] && !visited[j])
            DFS(j);
    }
}

int ktra_tplt(){
    FOR(i, 1, n){
        if(visited[i] == 0)
            return 1;
    }
    return 0;
}

int ktra(){
    memset(visited, 0, sizeof(visited));
    DFS(1);

    if(ktra_tplt()) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(a, 0, sizeof(a));
        cin >> n;
        For(i, 1, n){
            cin >> u >> v;
            a[u][v] = 1;
            a[v][u] = 1;
        }

        if(ktra()){
            cout << "NO" << endl;
            continue;
        }

        int kt = 1;
        FOR(i, 1, n){
            FOR(j, 1, n){
                if(a[i][j]){
                    a[i][j] = 0;
                    a[j][i] = 0;
                    if(ktra() == 0){
                        kt = 0;
                        break;                        
                    }
                    a[i][j] = 1;
                    a[j][i] = 1;                    
                }
            }
            if(kt == 0) break;
        }

        if(kt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}   
