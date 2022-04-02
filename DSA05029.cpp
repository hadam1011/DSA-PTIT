#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int n, j, a[100];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(a, 0, sizeof(a));
        string s;
        cin >> s;

        if(s[0] == '0'){
            cout << 0 << endl;
            continue;
        }

        a[0] = 1;
        a[1] = 1;
        n = s.size();
        FOR(i, 2, n){
            if(s[i-1] > '0') a[i] = a[i - 1];
            if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
                a[i] += a[i - 2];
        }

        cout << a[n] << endl;
    }   
}
