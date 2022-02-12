#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, check[15], a[1001];
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        FOR(i,1,n) cin >> a[i];
        int j = n, ln;
        while(a[j] < a[j-1] && j > 0) j--;
        if(j == 1) FOR(i,1,n) cout << i << " "; 
        else{
            ln = j;
            k = j - 1;
            FOR(i,j,n){
                if(a[k] < a[i] && a[i] < a[ln]) ln = i;
            } 
            swap(a[ln], a[k]);
            int l = j, r = n;
            while(l < r){
                swap(a[l], a[r]);
                l++; r--;
            }
            FOR(i,1,n) cout << a[i] << " ";
        }
        cout << endl;
    }   
}
