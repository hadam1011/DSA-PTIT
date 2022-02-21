#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
const ll MOD = 1e9+7;

int n, k, kt;

int Solve(int a[]){
    int r = n - 1, l = 0, mid;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] == k) return mid + 1;
        if(a[mid] < k) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[n];
        For(i,0,n) cin >> a[i];
        if(Solve(a)) cout << Solve(a) << endl;
        else cout << "NO" << endl;
    }
}
