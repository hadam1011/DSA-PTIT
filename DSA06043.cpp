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
        int a[100001], l = 1, tr = 0, ph = 0;
        For(i,0,n){
            cin >> a[i];
            if(i) ph += a[i];
        }
        if(tr == ph) cout << 1 << endl;
        else{
            int kt = 0;
            while(l < n){
                tr += a[l-1];
                ph -= a[l];
                if(tr == ph){
                    cout << l+1 << endl;
                    kt = 1;
                    break;
                }
                l++;
            }
            if(!kt) cout << -1 << endl;
        }
    }
}
