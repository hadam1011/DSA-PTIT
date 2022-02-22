#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
const ll MOD = 1e9+7;
int n, s, a[50], kq;

void Try(int i, int sum, int x){
    if(sum > s || x > kq) return;
    if(i == n){
        if(sum == s) kq = min(kq, x);
        return;
    }
    Try(i+1, sum, x);
    Try(i+1, sum+a[i], x+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);  
    tests(){
        cin >> n >> s;
        For(i,0,n) cin >> a[i];
        kq = INT_MAX;
        Try(0,0,0);
        if(kq == INT_MAX) cout << -1;
        else cout << kq;       
        cout << endl; 
    }
}
