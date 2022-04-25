#include <bits/stdc++.h>
#include <deque>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
string s;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> s;
        priority_queue<int> q;

        ll res = 0;
        int cnt[26] = {};
        For(i, 0, s.size()) cnt[s[i] - 'A']++;

        For(i, 0, 26) q.push(cnt[i]);

        while(n--){
            int x = q.top();
            q.pop();
            x--;
            q.push(x);
        }

        while(!q.empty()){
            res += pow(q.top(), 2);
            q.pop();
        }

        cout << res << endl;
    }
}
