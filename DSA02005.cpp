#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, check[15];
string s, a[15];

void in(){
    For(i,0,n) cout << a[i];
    cout << " ";
}

void Try(int i){
    For(j,0,n){
        if(!check[j]){
            a[i] = s[j];
            check[j] = 1;
            if(i == n-1) in();
            else Try(i+1);
            check[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        n = s.length();
        Try(0);
        cout << endl;
    }   
}
