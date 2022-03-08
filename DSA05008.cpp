#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)
a
typedef long long ll;

ll n, k, x;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        vector<int> sum(k+1, 0);
        sum[0] = 1;
        For(i,0,n){
            cin >> x;
            sum[x] = 1;
            ForD(j,k,x){
                if(sum[j-x]) sum[j] = 1;
            }
        }
        if(sum[k]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
