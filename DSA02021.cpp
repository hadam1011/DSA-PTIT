#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

ll n;
string s;

ll Try(ll len){
    if(n <= s.size()) return n - 1;
    if(n > len/2) n = n - len/2 - 1;
    if(!n) n = len/2;
    return Try(len/2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s >> n;
        ll len = s.size();
        while(len < n) len *= 2;
        cout << s[Try(len)] << endl;
    }
}
