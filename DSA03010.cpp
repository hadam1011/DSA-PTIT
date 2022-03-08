#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
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
        priority_queue <int, vector<int>, greater<int>> q;
        For(i,0,n){
            cin >> k;
            q.push(k);
        }
        ll kq = 0;
        while(q.size() >= 2){
            int x = q.top(); q.pop();
            int y = q.top(); q.pop();
            q.push(x + y);
            kq += x + y;
        }
        cout << kq << endl;
    }
}
