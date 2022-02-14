#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, check[20];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        queue<ll> q;
        q.push(9);
        while(1){
            ll x = q.front();
            if(x % n == 0){
                cout << q.front();
                break;
            }
            q.pop();
            q.push(x * 10);
            q.push(x * 10 + 9);
        }
        cout << endl;
    }
}
