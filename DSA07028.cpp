#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[n], len[n];
        For(i, 0, n) cin >> a[i];

        stack<int> st;
        st.push(0);
        len[0] = 1;
        cout << 1 << " ";

        For(i, 1, n){
            len[i] = 1;
            while(a[i] >= a[st.top()]){
                len[i] += len[st.top()];
                st.pop();
                if(st.empty()) break;
            }
            
            cout << len[i] << " ";
            st.push(i);
        }

        cout << endl;
    }
}
