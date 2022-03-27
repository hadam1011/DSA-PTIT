#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
int MOD = 1e9 + 7;
vector<int> adj[1000];
int visited[1000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        while(m--){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int bac_chan = 0, bac_le = 0;
        FOR(i,1,n){
            if(adj[i].size() % 2) bac_le++;
            else bac_chan++;
        }

        if(bac_le == 0) cout << 2 << endl;
        else if(bac_le == 2) cout << 1 << endl;
        else cout << 0 << endl;
        FOR(i,1,1000) adj[i].clear();
    }
}
