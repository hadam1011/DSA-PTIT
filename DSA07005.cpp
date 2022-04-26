#include <bits/stdc++.h>
#include <deque>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
string s;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        stack<string> st;

        FORD(i, s.size() - 1, 0){
            if(s[i] == '('){
                string tmp = "";
                while(st.top() != ")"){
                    tmp += st.top();
                    st.pop();
                }
                st.pop();
                st.push(tmp);
            }else if(s[i] == '-' && st.top().size() > 1){
                string tmp = st.top();
                st.pop();
                
                For(j, 0, tmp.size()){
                    if(tmp[j] == '+')
                        tmp[j] = '-';
                    else if(tmp[j] == '-')
                        tmp[j] = '+';
                }

                st.push(tmp);
                st.push("-");
            }else
                st.push(string(1, s[i]));
        }

        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        cout << res << endl;
    }
}
