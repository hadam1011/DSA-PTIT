#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int Solve(int a[]){
    int l = 0, r = n - 1, mid;
    while(l <= r){
        mid = (l+r)/2;
        if(a[mid] == k) return 1;
        if(a[mid] > k){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[n];
        For(i,0,n) cin >> a[i];
        cout << Solve(a) << endl;
    }
}   

