#include <bits/stdc++.h>
#include <deque>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

string a, b;
int MOD = 1e9 + 7;
int X[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int Y[8] = {1, -1, 2, 2, 1, -1, -2, -2};
int visited[50][50], kt;

struct pos{
    int h, c;
    int cnt;
};

pos Make_pos(string s){
    pos tmp;
    tmp.h = s[0] - 'a' + 1;
    tmp.c = s[1] - '0';
    tmp.cnt = 0;
    return tmp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(visited, 0, sizeof(visited));
        kt = 0;
        cin >> a >> b;

        if(a == b){
            cout << 0 << endl;
            continue;
        }

        pos n, m;
        n = Make_pos(a);
        m = Make_pos(b);
        queue<pos> q;
        q.push(n);

        while(!q.empty()){
            pos k = q.front();
            q.pop();

            For(i, 0, 8){
                int x = k.h + X[i];
                int y = k.c + Y[i];
                if(x == m.h && y == m.c){
                    cout << k.cnt + 1 << endl;
                    kt = 1;
                    break;
                }else if(x > 0 && y > 0 && x < 8 && y < 8 && !visited[x][y]){
                    visited[x][y] = 1;
                    pos tmp;
                    tmp.h = x;
                    tmp.c = y;
                    tmp.cnt = k.cnt + 1;
                    q.push(tmp);
                }
            }

            if(kt) break;
        }
    }
}
