#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, a[105];
vector<vector<int>> res;
vector<int> v;

void Try(int i, int sum){
    For(j,i,n){
        sum += a[j];
        v.push_back(a[j]);
        if(sum % 2) res.push_back(v);
        Try(j+1, sum);
        v.pop_back();
        sum -= a[j];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        For(i,0,n) cin >> a[i];
        sort(a, a+n, greater<int>());
        Try(0,0);
        sort(res.begin(), res.end());
        For(i,0,res.size()){
            For(j,0,res[i].size()) cout << res[i][j] << " ";
            cout << endl;
        }
        res.clear();
    }
}
