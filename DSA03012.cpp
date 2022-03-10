#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, a[26];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        string s;
        cin >> s;
        memset(a, 0, sizeof(a));
        For(i,0,s.size()){
            a[s[i]-'a']++;
        }
        sort(a, a+26, greater<int>());
        int len = s.size();
        if(len - a[0] >= a[0] - 1) cout << 1 << endl;
        else cout << -1 << endl;
    }
}
