#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, a[1001];
int MOD = 1e9 + 7;

int kt(int b[]){
    For(i,0,n/2){
        if(a[i] != b[i] && b[i] != a[n-i-1]) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int b[1001];
        For(i,0,n){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        if(kt(b)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
