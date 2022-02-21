#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
int n, k, a[101], res = 0;

void Try(int i, int spt, int x){
    For(j,i,n){
        if(a[j] > x){
            spt++;
            if(spt == k) res++;
            else Try(j+1, spt, a[j]);
            spt--;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    For(i,0,n) cin >> a[i];
    Try(0,0,0);
    cout << res;
}
