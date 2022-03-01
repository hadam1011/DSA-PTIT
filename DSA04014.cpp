#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, l, r;

ll ghep(ll a[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    ll L[n1], R[n2];
    For(i,0,n1) L[i] = a[l+i];
    For(i,0,n2) R[i] = a[m+i+1];
    
    ll kq = 0, i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]) a[k++] = L[i++];
        else{
            a[k++] = R[j++];
            kq += n1 - i;
        }
    }
    while(i < n1) a[k++] = L[i++];
    while(j < n2) a[k++] = R[j++];
    return kq;
}

ll Solve(ll a[], int l, int r){
    ll kq = 0;
    if(l >= r) return 0;
    int m = (l + r) / 2;
    kq += Solve(a, l, m);
    kq += Solve(a, m+1, r);
    kq += ghep(a, l, m, r);
    return kq;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        ll a[n];
        For(i,0,n) cin >> a[i];
        cout << Solve(a, 0, n-1) << endl;
    }
}
