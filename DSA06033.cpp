#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, a[100001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        For(i,0,n) cin >> a[i];
        int  b[100001];
        b[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--) b[i] = max(a[i], b[i+1]);
        int i = 0, j = 0, res = -1;
        while(i < n && j < n){
            if(b[j] > a[i]){
                res = max(res, j-i);
                j++;
            }else i++;
        }
        cout << res << endl;
    }
}
