#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, res[20005];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(res, 0, sizeof(res));
        cin >> n >> m;
        queue<int> q;
        q.push(n);

        if(n == m){
            cout << 0 << endl;
            continue;
        }

        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(res[x - 1] == 0 && x > 1){
                res[x - 1] = res[x] + 1;
                q.push(x - 1);
            } 

            if(res[x * 2] == 0 && x <= 5000){
                res[x * 2] = res[x] + 1;
                q.push(x * 2);
            }
            
            if(res[m]) break;
        }

        cout << res[m] << endl;
    }
}
