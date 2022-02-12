#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, check[15], a[11][11];
char s[100];

void in(char s[], int m){
    For(i,0,m) cout << s[i];
    cout << " ";
}

void Solve(int i, int j, int m){
    if(i == n-1 && j == n-1){
        in(s,m);
        k = 1;
    }
    if(a[i+1][j] == 1){
        s[m] = 'D';
        Solve(i+1,j,m+1);
    }
    if(a[i][j+1] == 1){
        s[m] = 'R';
        Solve(i,j+1,m+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        k = 0;
        cin >> n;
        For(i,0,n){
            For(j,0,n) cin >> a[i][j];
        }
        if(a[0][0] == 0) k = 0;
        else Solve(0,0,0);            
        if(!k) cout << -1;
        cout << endl;
    }   
}
