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
        set<int> s;
        int b[m], a[n], spt = 0;
        For(i,0,n){
            cin >> k;
            s.insert(k);
        }
        For(i,0,m) cin >> b[i];
        sort(b,b+m);
        For(i,0,m){
            if(s.count(b[i])) a[spt++] = b[i];
            s.insert(b[i]);
        }
        for(int x : s) cout << x << " ";
        cout << endl;
        For(i,0,spt) cout << a[i] << " ";
        cout << endl;
    }
}   

