#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        string s, tmp;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        FORD(i,v.size()-1,0) cout << v[i] << " ";
        cout << endl;
    }
}
