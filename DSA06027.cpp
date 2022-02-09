#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[105];
        vector<int> res[105];
        For(i,0,n) cin >> a[i];
        For(i,0,n-1){
            For(j,i+1,n){
                if(a[i] > a[j]) swap(a[i],a[j]);
            }
            For(k,0,n) res[i+1].push_back(a[k]);
        }
        for(int i=n-1; i>0; i--){
            cout << "Buoc " << i << ": ";
            for(int x : res[i]) cout << x << " ";
            cout << endl;
        }
    }
}   
