#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int a[11], n, b[11], xuoi[20], nguoc[20], cnt;

void Try(int i){
    FOR(j,1,n){
        if(!b[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
            a[i] = j;
            b[j] = 1; xuoi[i-j+n] = 1; nguoc[i+j-1] = 1;
            if(i == n) cnt++;
            else Try(i+1);
            b[j] = 0; xuoi[i-j+n] = 0; nguoc[i+j-1] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        cnt = 0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(xuoi,0,sizeof(xuoi));
        memset(nguoc,0,sizeof(nguoc));
        Try(1);
        cout << cnt << endl;
    }
}
