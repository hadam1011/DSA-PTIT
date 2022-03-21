#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, x;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        queue<int> q;
        
        For(i,0,n){
            cin >> k;
            switch (k){
                case 1:{
                    cout << q.size() << endl;
                    break;
                }
                case 2:{
                    if(q.empty()) cout << "YES" << endl;
                    else cout << "NO" << endl;
                    break;
                }
                case 3:{
                    cin >> x;
                    q.push(x);
                    break;
                }
                case 4:{
                    if(!q.empty()) q.pop();
                    break;
                }
                case 5:{
                    if(q.empty()) cout << -1 << endl;
                    else cout << q.front() << endl;
                    break;
                }
                case 6:{
                    if(q.empty()) cout << -1 << endl;
                    else cout << q.back() << endl;
                    break;
                }                              
            }
        }
    }
}
