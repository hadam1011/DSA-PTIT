#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, a[50], check[50], vt[50];

void in(){
    FOR(i,1,n) cout << a[vt[i]] << " ";
    cout << endl;
}

void Try(int i){
    FOR(j,1,n){
        if(!check[j]){
            vt[i] = j;
            check[j] = 1;
            if(i == n) in();
            else Try(i+1);
            check[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    FOR(i,1,n) cin >> a[i];
    sort(a+1,a+n+1);
    memset(check,0,sizeof(check));
    Try(1);
}
