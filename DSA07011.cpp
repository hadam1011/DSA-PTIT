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
        stack<string> st;

        For(i, 0, s.size()){
            if(isalpha(s[i])) st.push(string(1, s[i]));
            else{
                string x = st.top();
                st.pop();
                string tmp = s[i] + st.top() + x;
                st.pop();
                st.push(tmp);
            }
        }

        cout << st.top() << endl;
    }
}
