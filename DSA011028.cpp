#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        int height = 0;
        map<int, int> mp;
        mp[1] = 0;
        cin >> n;
        For(i, 0, n - 1){
            cin >> u >> v;
            mp[v] = mp[u] + 1;
            height = max(height, mp[v]);
        }

        cout << height << endl;
    }
}
