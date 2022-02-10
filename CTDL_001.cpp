#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, a[1000];

void in(){
    int l = 1, r = n;
    while(l < r){
        if(a[l] != a[r]) return;
        l++; r--;
    }
    FOR(i,1,n) cout << a[i] << "\t";
    cout << endl;
}

void Try(int i){
    For(j,0,2){
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
