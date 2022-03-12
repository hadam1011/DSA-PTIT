#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, kq = 1e9, cost = 0;
int a[20][20], check[10], x[10];
int MOD = 1e9 + 7;

int dem(string s, string b){
    int cnt = 0, i = 0, j = 0;
    while(i < s.size() && j < b.size()){
        if(s[i] == b[j]){
            cnt++;
            i++;
            j++;
        }else if(s[i] < b[j]) i++;
        else j++;
    }
    return cnt;
}

void Try(int i){
    FOR(j,1,n){
        if(!check[j]){
            check[j] = 1;
            x[i] = j;
            if(i > 1) cost += a[x[i-1]][j];
            if(i == n) kq = min(kq, cost);
            else if(cost < kq) Try(i+1);
            check[j] = 0;
            cost -= a[x[i-1]][j];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n; 
    string xau[20];
    memset(a, 0, sizeof(a));
    FOR(i,1,n){
        cin >> xau[i];
        For(j,1,i){
            a[i][j] = dem(xau[i], xau[j]);
            a[j][i] = a[i][j];
        }
    }
    memset(check, 0, sizeof(check));
    Try(1);
    cout << kq;
}
