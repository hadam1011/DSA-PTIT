#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, a[50], check[50], spt = 0; 
vector<vector<int>> res;
vector<int> v;

void Try(){
    For(i,0,n){
        if(!v.empty()){
            if(v.back() > a[i]) continue;
        }
        if(k >= a[i]){
            v.push_back(a[i]);
            k -= a[i];
            if(k == 0) res.push_back(v);
            else Try();
            v.pop_back();
            k += a[i];            
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        For(i,0,n) cin >> a[i];
        Try();
        if(res.empty()) cout << -1;
        else{
            cout << res.size() << " ";
            For(i,0,res.size()){
                cout << "{";
                For(j,0,res[i].size()-1) cout << res[i][j] << " ";
                cout << res[i][res[i].size()-1] << "}" << " ";
            }
        }
        cout << endl;
        res.clear();
    }
}
