#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

ll n, k;
int MOD = 1e9 + 7;

ll Convert(string s){
    ll res = 0; n = s.size()-1;
    For(i,0,s.size()){
        if(s[i] == '1') res += pow(2, n);
        n--;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        string s1, s2;
        cin >> s1 >> s2;
        cout << Convert(s1) * Convert(s2) << endl;
    }
}
