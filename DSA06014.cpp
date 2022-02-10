#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, x;
int a[1000001];
int const N = 1e6 + 1; 

void Sangnt(){
    a[0] = 1; a[1] = 1;
    FOR(i,2,sqrt(N)){
        if(!a[i]){
            for(int j=i+i; j<N; j+=i)
                a[j] = 1;
        }
    }
}

void Solve(){
    For(i,2,n){
        if(!a[i] && !a[n-i]){
            cout << i << " " << n-i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Sangnt();
    tests(){
        cin >> n;
        Solve();
    }
}   
