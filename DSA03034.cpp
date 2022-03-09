#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, k;
int MOD = 1e9 + 7;
vector<int> res;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        For(i,0,n) cin >> a[i];
        For(i,0,m) cin >> b[i];
        For(i,0,k) cin >> c[i];
        int x = 0, y = 0, z = 0;
        while(x < n && y < m && z < k){
            if(a[x] == b[y] && b[y] == c[z]){
                res.push_back(a[x]);
                x++; y++; z++;
            }else if(a[x] <= b[y] && a[x] <= c[z]) x++;
            else if(b[y] <= a[x] && b[y] <= c[z]) y++;
            else z++;
        }
        if(res.empty()) cout << "NO";
        else For(i,0,res.size()) cout << res[i] << " ";
        cout << endl;
        res.clear();
    }
}
