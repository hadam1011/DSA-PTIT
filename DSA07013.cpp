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
        string s;
        cin >> s;
        stack<int> st;

        For(i, 0, s.size()){
            if(isdigit(s[i])) st.push(s[i] - '0');
            else{
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if(s[i] == '+')
                    st.push(x + y);
                else if(s[i] == '-')
                    st.push(y - x);
                else if(s[i] == '*')
                    st.push(x * y);
                else
                    st.push(y / x);
            }
        }

        cout << st.top() << endl;
    }
}
