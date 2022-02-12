#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, check[15], a[15];
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        cout << "[";
        FOR(i,1,n){
            cin >> a[i];
            if(i < n) cout << a[i] << " ";
            else cout << a[i] << "]" << endl;
        }
        n--;
        while(n){
            cout << "[";
            FOR(i,1,n){
                a[i] += a[i+1];
                if(i < n) cout << a[i] << " ";
                else cout << a[i] << "]" << endl;
            }
            n--;
        }
    }   
}
