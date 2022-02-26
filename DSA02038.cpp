#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, a[30], vt[30];

void in(){
    FOR(i,1,k) cout << a[vt[i]] << " ";
    cout << endl;
}

void Try(int i){
    FOR(j,vt[i-1]+1,n-k+i){
        vt[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        FOR(i,1,n) cin >> a[i];
        sort(a+1,a+n+1);
        memset(vt,0,sizeof(vt));
        Try(1);
    }
}
