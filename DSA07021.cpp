#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;
string s;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        stack<int> st;
        st.push(-1);
        int res = 0;

        For(i, 0, s.size()){
            if(s[i] == '(') st.push(i);
            else{
                st.pop();
                if(!st.empty())
                    res = max(res, i - st.top());
                else
                    st.push(i);
            }
        }

        cout << res << endl;
    }
}
