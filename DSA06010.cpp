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
        set<int> s;
        For(i,0,n){
            cin >> k;
            while(k){
                s.insert(k%10);
                k /= 10;
            }
        }
        for(int x : s) cout << x << " ";
        cout << endl;
    }
}   
