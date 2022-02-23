#include <bits/stdc++.h> 
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, a[100];

void in(){
    FOR(i,1,k) cout << char('A' + a[i] - 1);
    cout << endl;
}

void Try(int i){
    for(int j=a[i-1]+1; j<=i+n-k; j++){
        a[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        Try(1);
    }
}
