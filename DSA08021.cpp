#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
int a[2005][2005], res[2005][2005];
int MOD = 1e9 + 7;

void Solve(){
    queue<pair<int,int>> q;
    q.push({1, 1});

    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();

        int x = tmp.first;
        int y = tmp.second;

        if(a[x][y + a[x][y]] != -1 && res[x][y + a[x][y]] == 0){
            res[x][y + a[x][y]] = res[x][y] + 1;
            q.push({x, y + a[x][y]});
        }  

        if(a[x + a[x][y]][y] != -1 && res[x + a[x][y]][y] == 0){
            res[x + a[x][y]][y] = res[x][y] + 1;
            q.push({x + a[x][y], y});
        }        
    }

    if(res[n][m]) cout << res[n][m] << endl;
    else cout << -1 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(a, -1, sizeof(a));
        memset(res, 0, sizeof(res));
        cin >> n >> m;
        FOR(i, 1, n){
            FOR(j, 1, m)
                cin >> a[i][j];
        }

        Solve();
    }
}
