#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt = 0, k, check[20];

void in(int a[]){
    int sum = 0;
    For(i,0,n){
        if(check[i]) sum += a[i];
    }
    if(sum != k) return;
    cnt++;
    For(i,0,n){
        if(check[i]) cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i, int a[]){
    FOR(j,0,1){
        check[i] = j;
        if(i == n - 1) in(a);
        else Try(i+1,a);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    int a[20], kt = 0;
    For(i,0,n) cin >> a[i];
    Try(0,a);
    cout << cnt << endl;
}
