#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[25];
        For(i,0,n) cin >> a[i];
        
        sort(a, a+n);
        ll x = 0, y = 0;
        For(i,0,n){
            if(i % 2) x = x*10 + a[i];
            else y = y*10 + a[i];
        }

        cout << x + y << endl;    
    }
}
