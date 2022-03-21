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
    queue<int> q;
    tests(){
        cin >> s;
        if(s == "PUSH"){
            cin >> k;
            q.push(k);
        }else if(s == "POP" && !q.empty()) q.pop();
        else if(s == "PRINTFRONT") {
            if(q.empty()) cout << "NONE" << endl;
            else cout << q.front() << endl;
        }
    }
}
