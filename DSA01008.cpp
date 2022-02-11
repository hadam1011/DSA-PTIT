#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

void in(int a[]){
    cnt = 0;
    FOR(i,1,n) if(a[i] == 1) cnt++;
    if(cnt != k) return;
    FOR(i,1,n) cout << a[i];
    cout << endl;
}

void Try(int i, int a[]){
    FOR(j,0,1){
        a[i] = j;
        if(i == n) in(a);
        else Try(i+1,a);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[101];
        Try(1,a);
    }
}
