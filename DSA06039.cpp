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
        int a[100001], kt = 0;
        map<int,int> mp;
        For(i,0,n){
            cin >> a[i];
            mp[a[i]]++;
        }
        For(i,0,n){
            if(mp[a[i]] > 1){
                kt = 1;
                cout << a[i] << endl;
                break;
            }
        }
        if(!kt) cout << "NO" << endl;
    }
}   

