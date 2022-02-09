#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[1001];
        For(i,0,n-1) cin >> a[i];
        int l = 0, r = n-1;
        sort(a,a+n);
        while(l <= r){
            if(l == r) cout << a[l];
            else cout << a[r] << " " << a[l] << " ";
            l++; r--;
        }
        cout << endl;
    }
}   

