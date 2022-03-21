#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
int MOD = 1e9 + 7;
string s;

ll Convert(string s){
    ll res = 0;
    int len = s.size() - 1;
    For(i,0,s.size()){
        if(s[i] == '1') res = res + pow(2,len);
        len--;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        For(i,0,s.size()){
            if(s[i] >= '2'){
                For(j,i,s.size()) s[j] = '1';
                break;
            }
        }

        cout << Convert(s) << endl;
    }
}
