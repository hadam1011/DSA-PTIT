#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        vector<int> res;
        For(i,0,n){
            cin >> k;
            res.push_back(k);
        }
        For(i,0,m){
            cin >> k;
            res.push_back(k);
        }
        sort(res.begin(),res.end());
        For(i,0,n+m) cout << res[i] << " ";
        cout << endl;
    }
}   

