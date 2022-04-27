#include <bits/stdc++.h>
#include <deque>

using namespace std;

#define tests() int t; cin >> t; while (t--)
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
        cin >> n;
        set<int> s;
        queue<pair<int,int>> q;
        q.push({n, 0});

        while(!q.empty()){
            pair<int, int> x = q.front();
            q.pop();

            if(x.first == 1){
                cout << x.second << endl;
                break;
            }

            if(s.find(x.first - 1) == s.end() && x.first > 1){
                q.push({x.first - 1, x.second + 1});
                s.insert(x.first - 1);
            }

            FOR(i, 2, sqrt(x.first)){
                if(x.first % i == 0 && s.find(x.first / i) == s.end()){
                    q.push({x.first / i, x.second + 1});
                    s.insert(x.first / i);
                }
            }
        }
    }
}
