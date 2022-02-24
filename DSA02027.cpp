#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cmin = INT_MAX, sum = 0, res = INT_MAX;
int a[50][50], check[50], x[50];

void Try(int i){
    if(sum + (n-i+1) * cmin >= res) return;
    FOR(j,2,n){
        if(!check[j]){
            x[i] = j;
            sum += a[x[i-1]][j];
            check[j] = 1;
            if(i == n){
                if(sum + a[j][1] < res) res = sum + a[j][1];
            }
            else Try(i+1);
            check[j] = 0;
            sum -= a[x[i-1]][j];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    FOR(i,1,n){
        FOR(j,1,n){
            cin >> a[i][j];
            if(a[i][j]) cmin = min(cmin, a[i][j]);
        }
    }
    memset(check,0,sizeof(check));
    check[1] = 1; x[1] = 1;
    Try(2);
    cout << res << endl;
}
