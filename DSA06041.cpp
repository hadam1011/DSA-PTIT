#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        map<int,int> m;
        For(i,0,n){
            cin >> k;
            m[k]++;
        }
        int kt = 0;
        for(auto x : m){
            if(x.second > n/2){
                kt = 1;
                cout << x.first;
                break;
            }
        }
        if(!kt) cout << "NO";
        cout << endl;
    }
}   
