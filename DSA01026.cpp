#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, a[20];

void in(){
    if(a[1] != 1 || a[n] != 0) return;
    FOR(i,1,n-1){
        if(a[i] && a[i+1]) return;
    }
    int cnt = 0, kt = 1;
    FOR(i,1,n){
        if(!a[i]) cnt++;
        else cnt = 0;
        if(cnt > 3) kt = 0;
    }
    if(!kt) return;
    FOR(i,1,n){
        if(a[i]) cout << 8;
        else cout << 6;
    }
    cout << endl;
}

void Try(int i){
    FOR(j,0,1){
        a[i] = j;
        if(i == n) in();
        else Try(i+1);
    }
}   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    Try(1);
}
