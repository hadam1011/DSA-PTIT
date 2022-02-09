#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

bool cmp(int a, int b){
    return abs(a-k) < abs(b-k);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[100001];
        For(i,0,n) cin >> a[i];
        stable_sort(a,a+n,cmp);
        For(i,0,n) cout << a[i] << " ";
        cout << endl;
    }
}   

