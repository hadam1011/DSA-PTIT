#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, a[20], check[20];

void in(){
    FOR(i,2,n-1){
        if(a[i] == 1 && a[i-1] != 5 && a[i+1] != 5) return;
        if(a[i] == 5 && a[i-1] != 1 && a[i+1] != 1) return;
    }
    FOR(i,1,n) cout << char(a[i] + 'A' - 1);
    cout << endl;
}

void Try(int i){
    FOR(j,1,n){
        if(!check[j]){
            a[i] = j;
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
    char c; 
    cin >> c;
    n = c - 'A' + 1;
    memset(check,0,sizeof(check));
    Try(1);
}
