#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, x;
int res[1001], a[1001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        For(i,0,n) cin >> a[i];
        int kq = 0;
        For(i,0,n){
            res[i] = a[i];
            For(j,0,i){
                if(a[i] > a[j]) res[i] = max(res[i], res[j] + a[i]);
            }
            kq = max(kq, res[i]);
        }
        cout << kq << endl;
    }
}
