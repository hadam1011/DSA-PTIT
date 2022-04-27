#include <bits/stdc++.h>
#include <deque>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
int a[500][500], visited[500][500];
int MOD = 1e9 + 7;
int X[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int Y[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void BFS(int i, int j){
    For(k, 0, 8){
        int x = X[k] + i;
        int y = Y[k] + j;
        if(x >= 0 && y >= 0 && x < n && y < m && !visited[x][y] && a[x][y]){
            visited[x][y] = 1;
            BFS(x, y);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(visited, 0, sizeof(visited));
        cin >> n >> m;
        For(i, 0, n){
            For(j, 0, m) cin >> a[i][j];
        }

        int res = 0;
        For(i, 0, n){
            For(j, 0, m){
                if(a[i][j] && !visited[i][j]){
                    visited[i][j] = 1;
                    res++;
                    BFS(i, j);
                }            
            }
        }

        cout << res << endl;
    }
}
