#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, a[20], b[20], vt;

void in(){
    for(int i=1; i<=k; i++){
        if(a[i] != b[i]) return;
    }
    cout << vt << endl;
}

void Try(int i){
    for(int j=a[i-1]+1; j<=i+n-k; j++){
        a[i] = j;
        if(i == k){
            in();
            vt++;
        }
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        FOR(i,1,k) cin >> b[i]; 
        vt = 1;
        Try(1);
    }
}
