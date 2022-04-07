#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int MOD = 1e9 + 7;
ll n, m, k;
int a[100000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        For(i, 0, n) cin >> a[i];

        ll sum = a[0];
        int l = 0, r = 0, kt = 0;
        For(i, 1, n){
            sum += a[i];
            while(sum > k && l < i){
                sum -= a[l];
                l++;
            }
            if(sum == k){
                kt = 1;
                break;
            }
        }

        if(kt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}   
