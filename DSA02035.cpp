#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, check[10], vt[10], res = 1e9;
string a[10];
int MOD = 1e9 + 7;

void kt(){
    vector<int> v;
    FOR(i,1,n){
        string s = "";
        FOR(j,1,k){
            s += a[i][vt[j]-1];
        }
        v.push_back(stoi(s));
    }
    sort(v.begin(), v.end());
    res = min(v.back() - v[0], res);
}

void Try(int i){
    FOR(j,1,k){
        if(!check[j]){
            check[j] = 1;
            vt[i] = j;
            if(i == k) kt();
            else Try(i+1);
            check[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    memset(check, 0, sizeof(check));
    cin >> n >> k;
    FOR(i,1,n) cin >> a[i];
    Try(1);
    cout << res;
}
