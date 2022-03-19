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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        vector<ll> v;
        queue<ll> q;
        q.push(6); v.push_back(6);
        q.push(8); v.push_back(8);
        k = 1;
        while(1){
            ll x = q.front();
            q.pop();
            q.push(x*10 + 6);
            q.push(x*10 + 8); 
            string s = to_string(x);
            k = s.size() + 1;
            if(k > n) break;
            v.push_back(x*10 + 6);
            v.push_back(x*10 + 8);
        }
        FORD(i,v.size()-1,0) cout << v[i] << " ";
        cout << endl;
    }
}
