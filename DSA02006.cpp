#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, check[20];
vector<string> v;

void Solve(int i, string s, int sum, int a[]){
    if(i == n){
        if(sum == k) v.push_back(s);
        return;
    }
    string tmp = s;
    tmp += " " + to_string(a[i]);
    Solve(i+1,tmp,sum+a[i],a);
    Solve(i+1,s,sum,a);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[20];
        For(i,0,n) cin >> a[i];
        sort(a,a+n);
        For(i,0,n){
            if(a[i] <= k){
                string tmp = "";
                tmp += "[" + to_string(a[i]);
                Solve(i+1,tmp,a[i],a);
            }
        }
        if(!v.empty()) For(i,0,v.size()) cout << v[i] << "] ";
        else cout << -1;
        cout << endl;
        v.clear();
    }
}
