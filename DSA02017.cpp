#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, a[10][10], res, kq;
int cot[10], xuoi[20], nguoc[20], vt[10];

void Try(int i){
    FOR(j,1,8){
        if(!cot[j] && !xuoi[i+j-1] && !nguoc[i-j+n]){
            vt[i] = j;
            cot[j] = 1; xuoi[i+j-1] = 1; nguoc[i-j+n] = 1;
            if(i == 8){
                res = 0;
                FOR(k,1,8) res += a[k][vt[k]];
                kq = max(res, kq); 
            }
            else Try(i+1);
            cot[j] = 0; xuoi[i+j-1] = 0; nguoc[i-j+n] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        FOR(i,1,8){
            FOR(j,1,8) cin >> a[i][j];
        }
        memset(cot,0,sizeof(cot));
        memset(xuoi,0,sizeof(xuoi));
        memset(nguoc,0,sizeof(nguoc));
        kq = INT_MIN;
        Try(1);
        cout << kq << endl;
    }
}
