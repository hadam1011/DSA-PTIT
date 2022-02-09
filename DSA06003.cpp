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
        int a[1001], b[1001], res = 0;
        For(i,0,n){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        For(i,0,n){
            if(a[i] != b[i]){
                For(j,i+1,n){
                    if(a[j] == b[i]){
                        res++;
                        swap(a[j], a[i]);
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }
}   

