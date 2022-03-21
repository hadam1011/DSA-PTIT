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
        queue<string> q;
        q.push("1");
        
        while(1){
            string x = q.front(); 
            q.pop();
            ll res = 0;
            For(i,0,x.size()){
                res = res*10 + (x[i] - '0');
                res %= n;
            }
            if(res == 0){
                cout << x << endl;
                break;
            }
            q.push(x + "0");
            q.push(x + "1");
        }
    }
}
