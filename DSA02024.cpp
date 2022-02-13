#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, a[20], check[20];
vector<string> v;   

void Solve(int i, string s, int j, int k){
    if(i == n){
        if(j >= 2) v.push_back(s);
        return;
    }
    if(a[i] < k) Solve(i+1,s,j,k);
    else{
        string tmp = s;
        tmp += " " + to_string(a[i]);
        Solve(i+1,tmp,j+1,a[i]);
        Solve(i+1,s,j,k);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    string tmp = "";
    For(i,0,n) cin >> a[i];
    For(i,0,n-1){
        tmp = to_string(a[i]);
        Solve(i+1,tmp,1,a[i]);
    }
    sort(v.begin(), v.end());
    For(i,0,v.size()) cout << v[i] << endl;
}
