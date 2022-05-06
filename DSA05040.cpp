#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[n], incr[n], decr[n];
        For(i, 0, n) cin >> a[i];

        incr[0] = 1;
        For(i, 1, n){
            incr[i] = 1;
            if(a[i] > a[i - 1])
                incr[i] = incr[i - 1] + 1;
        }

        decr[n - 1] = 1;
        FORD(i, n - 2, 0){
            decr[i] = 1;
            if(a[i] > a[i + 1])
                decr[i] = decr[i + 1] + 1;
        }

        int res = 0;
        For(i, 0, n){
            res = max(res, incr[i] + decr[i] - 1);
        }

        cout << res << endl;
    }
}
