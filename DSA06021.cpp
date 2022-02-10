#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, x;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int Solve(vector<pair<int, int>> v){
    int l = 0, r = n-1, mid;
    while(l <= r){
        mid = (l+r)/2;
        if(v[mid].first == k) return v[mid].second;
        if(v[mid].first < k){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        vector<pair<int, int>> v;
        For(i,0,n){
            cin >> x;
            v.push_back(make_pair(x,i+1));
        }
        sort(v.begin(),v.end(),cmp);
        cout << Solve(v) << endl;
    }
}   
