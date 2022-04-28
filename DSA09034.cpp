#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
int visited[105][105] = {};
char a[105][105];
int X[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int Y[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void DFS(int i, int j){
    visited[i][j] = 1;
    For(k, 0, 8){
        int x = X[k] + i;
        int y = Y[k] + j;
        if(x >= 0 &&  y >= 0 && x < n && y < m && !visited[x][y] && a[x][y] == 'W'){
            DFS(x, y);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    For(i, 0, n){
        For(j, 0, m) cin >> a[i][j];
    }

    int res = 0;
    For(i, 0, n){
        For(j, 0, m){
            if(a[i][j] == 'W' && !visited[i][j]){
                res++;
                DFS(i, j);
            }
        }
    }

    cout << res << endl;
}
