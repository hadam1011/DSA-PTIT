#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[n], b[n], st, end;
        For(i,0,n){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        For(i,0,n){
            if(a[i] != b[i]){
                st = i + 1;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i] != b[i]){
                end = i + 1;
                break;
            }
        }
        cout << st << " " << end << endl;
    }
}   

