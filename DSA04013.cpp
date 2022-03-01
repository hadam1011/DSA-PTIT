#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, l, r;
int MOD = 1e9 + 7;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[n];
        For(i,0,n) cin >> a[i];
        sort(a, a+n, cmp);
        int res = 0;
        l = 0; r = n/2;
        while(l < n/2 && r < n){
            if(a[l] >= a[r]*2){
                res++; 
                l++; 
                r++;
            }else r++;
        }
        cout << n - res << endl;
    }
}
