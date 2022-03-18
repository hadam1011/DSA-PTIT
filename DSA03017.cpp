#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
string s;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> k >> s;
        priority_queue<int> q;
        map<int, int> m;
        For(i,0,s.size()){
            m[s[i]]++;
        }
        for(auto x : m) q.push(x.second);
        while(k--){
            int t = q.top();
            q.pop();
            t--;
            q.push(t);
        }
        int res = 0;
        while(!q.empty()){
            res += q.top() * q.top();
            q.pop();
        }
        cout << res << endl;
    }
}
