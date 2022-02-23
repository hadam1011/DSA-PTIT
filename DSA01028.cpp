#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, x, len, a[50], vt[50];

void in(){
    FOR(i,1,k) cout << a[vt[i]] << " ";
    cout << endl;
}

void Try(int i){
    FOR(j,vt[i-1]+1,len-k+i){
        vt[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    set<int> s;
    FOR(i,1,n){
        cin >> x;
        s.insert(x);
    }
    int spt = 1; len = s.size();
    for(auto u : s) a[spt++] = u;
    memset(vt,0,sizeof(vt));
    Try(1);
}
