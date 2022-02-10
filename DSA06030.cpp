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
        int a[105], bc = 1, kt, spt = 0;
        For(i,0,n) cin >> a[i];
        vector<int> res[105];
        while(1){
            kt = 0;
            For(i,0,n-1){
                if(a[i] > a[i+1]){
                    swap(a[i], a[i+1]);
                    kt = 1;
                }
            }
            if(!kt) break;
            spt++;
            For(j,0,n) res[spt].push_back(a[j]);
        }
        for(int i=spt; i>0; i--){
            cout << "Buoc " << i << ": ";
            for(int x : res[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
