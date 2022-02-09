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
    int a[105], key, j;
    For(i,0,n) cin >> a[i];
    vector<int> res[105];
    res[0].push_back(a[0]);
    For(i,1,n){
        key = a[i];
        j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        For(k,0,i+1) res[i].push_back(a[k]);
    }
    for(int i=n-1; i>=0; i--){
        cout << "Buoc " << i << ": ";
        for(int x : res[i]) cout << x << " ";
        cout << endl;
    }
}   

