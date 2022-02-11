#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

void in(int a[]){
    if(a[1] == 1) return;
    FOR(i,1,n-3) if(a[i] && a[i+1]) return;
    cout << "H";
    FOR(i,1,n-2){
        if(!a[i]) cout << "A";
        else cout << "H";
    }
    cout << "A" << endl;
}

void Try(int i, int a[]){
    FOR(j,0,1){
        a[i] = j;
        if(i == n-2) in(a);
        else Try(i+1,a);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[101];
        if(n == 2) cout << "HA" << endl;
        else Try(1,a);
    }
}
