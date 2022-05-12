#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
int a[500][500];
int X[4] = {-1, 0, 1, 0};
int Y[4] = {0, 1, 0, -1};

struct point{
    int r, c, day;
    point(int i, int j, int a){
        r = i;
        c = j;
        day = a;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        int res = 0, check = 1;
        queue<point> q;
        cin >> n >> m;
        For(i, 0, n){
            For(j, 0, m){
                cin >> a[i][j]; 
                if(a[i][j] == 2) q.push(point(i, j, 0));
            }   
        }

        while(!q.empty()){
            point top = q.front();
            res = max(res, top.day);
            q.pop();

            For(i, 0, 4){
                int x = X[i] + top.r;
                int y = Y[i] + top.c;
                if(x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1){
                    a[x][y] = 2;
                    q.push(point(x, y, top.day + 1));
                }
            }
        }    

        For(i, 0, n){
            For(j, 0, m){
                if(a[i][j] == 1){
                    check = 0;
                    break;
                }
            }
            if(!check) break;
        }

        if(check)
            cout << res << endl;
        else
            cout << -1 << endl;
    }
}
