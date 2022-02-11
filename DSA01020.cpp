#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        string s;
        cin >> s;
        int kt = 0, n = s.length();
        for(int i=n-1; i>=0; i--){
            if(s[i] == '1'){
                kt = 1;
                s[i] = '0';
                For(j,i+1,n) s[j] = '1';
                break;
            }
        }
        if(kt) For(i,0,n) cout << s[i];
        else For(i,0,n) cout << '1';
        cout << endl;
    }
}
