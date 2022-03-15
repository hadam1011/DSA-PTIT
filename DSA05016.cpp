#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, res[10001];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        res[1] = 1;
        int i2 = 1, i3 = 1, i5 = 1;
        FOR(i,2,n){
            res[i] = min(res[i2]*2, min(res[i3]*3, res[i5]*5));
            if(res[i] == res[i2] * 2) i2++;
            if(res[i] == res[i3] * 3) i3++;
            if(res[i] == res[i5] * 5) i5++;
        }
        cout << res[n] << endl;
    }
}
