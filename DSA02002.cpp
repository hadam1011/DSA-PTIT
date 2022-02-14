#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, check[20];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        vector<int> v[11];
        int a[n];
        cnt = 0;
        For(i,0,n){
            cin >> a[i];
            v[cnt].push_back(a[i]);
        }
        n--; cnt++;
        while(n){
            For(i,0,n){
                a[i] = a[i] + a[i+1];
                v[cnt].push_back(a[i]);
            }
            n--; cnt++;
        }
        for(int i=cnt-1; i>=0; i--){
            cout << "[";
            For(j,0,v[i].size()-1) cout << v[i][j] << " ";
            cout << v[i][v[i].size()-1] << "]" << " "; 
        }
        cout << endl;
    }
}
