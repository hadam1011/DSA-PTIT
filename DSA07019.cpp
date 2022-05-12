#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v;
ll a[100001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        stack<ll> st;
        For(i, 0, n) cin >> a[i];

        ll res = 0, i = 0;
        while(i < n){
            if(st.empty() || a[i] >= a[st.top()]){
                st.push(i);
                ++i;
            }else{
                int x = st.top();
                st.pop();
                if(st.empty())
                    res = max(res, i * a[x]);
                else
                    res = max(res, a[x] * (i - st.top() - 1));
            }
        }

        while(!st.empty()){
            ll x = st.top();
            st.pop();
            if(st.empty())
                res = max(res, i * a[x]);
            else
                res = max(res, a[x] * (i - st.top() - 1));            
        }

        cout << res << endl;
    }
}
