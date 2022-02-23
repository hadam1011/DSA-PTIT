#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, a[20], b[20], vt, check[20];

void in(){
    for(int i=1; i<=n; i++){
        if(a[i] != b[i]) return;
    }
    cout << vt << endl;
}

void Try(int i){
    for(int j=1; j<=n; j++){
        if(!check[j]){
            a[i] = j;
            check[j] = 1;
            if(i == n){
                in();
                vt++;
            }
            else Try(i+1);
            check[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        FOR(i,1,n) cin >> b[i]; 
        memset(check,0,sizeof(check));
        vt = 1;
        Try(1);
    }
}
