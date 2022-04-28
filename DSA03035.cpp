#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, a[10000] = {};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int len = 0;
    cin >> n;
    For(i, 0, n){
        cin >> m;
        if(a[m - 1]){
            a[m] = a[m - 1] + 1;
            len = max(len, a[m]);
        }else
            a[m] = 1;
    }

    cout << n - len;
}
