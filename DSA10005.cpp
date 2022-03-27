#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, a[1000][1000];
int MOD = 1e9 + 7;

int check(){
    FOR(i,1,n){
        int deg1 = 0, deg0 = 0; // deg1 = deg+, deg0 = deg-
        
        FOR(j,1,n){
            if(a[i][j]) deg1++;
            if(a[j][i]) deg0++;
        }

        if(deg0 != deg1) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(a, 0, sizeof(a));
        cin >> n >> m;
        while(m--){
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }

        if(check()) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
