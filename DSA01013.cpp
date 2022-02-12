#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, check[15], a[1001];
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        string res = "";
        res += s[0];
        For(i,1,s.size()){
            if(s[i] == res[i-1]) res += "0";
            else res += "1";
        }
        cout << res << endl;
    }   
}
