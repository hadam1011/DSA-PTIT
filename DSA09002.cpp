#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n; 
    cin.ignore();
    FOR(i,1,n){
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> num){
            if(stoi(num) > i) cout << i << " " << stoi(num) << endl;
        }
    }
}
