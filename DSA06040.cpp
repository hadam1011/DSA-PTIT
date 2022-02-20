#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
int n1, n2, n3;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3];
        For(i,0,n1) cin >> a[i];
        For(i,0,n2) cin >> b[i];
        For(i,0,n3) cin >> c[i];
        int i = 0, j = 0, k = 0;
        vector<ll> res;
        while(i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && b[j] == c[k]){
                res.push_back(a[i]);
                i++;
                j++;
                k++;
            }else if(a[i] <= b[j] && a[i] <= c[k]) i++;
            else if(b[j] <= a[i] && b[j] <= c[k]) j++;
            else k++;
        }
        if(res.empty()) cout << -1;
        else For(i,0,res.size()) cout << res[i] << " ";
        cout << endl;
    }
}
