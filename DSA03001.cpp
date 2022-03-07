#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, res;
int MOD = 1e9 + 7;
int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        res = 0;
        FORD(i,9,0){
            if(n >= a[i]){
                res += n/a[i];
                n %= a[i];
            }
        }
        cout << res << endl;
    }
}
