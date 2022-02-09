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
    cin >> n;
    int vt1 = 0, vt2 = 0;
    vector<int> chan;
    vector<int> le;
    FOR(i,1,n){
        cin >> k;
        if(i % 2) le.push_back(k);
        else chan.push_back(k);
    }
    sort(chan.begin(), chan.end(), greater<int>());
    sort(le.begin(), le.end());
    FOR(i,1,n){
        if(i % 2) cout << le[vt1++] << " ";
        else cout << chan[vt2++] << " ";
    }
    cout << endl;
    
}   

