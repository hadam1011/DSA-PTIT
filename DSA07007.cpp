#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
string a, b;

string Convert(string s){
    stack<string> st;

    FORD(i, s.size() - 1, 0){
        if(s[i] == '('){
            string tmp = "";
            while(st.top() != ")"){
                tmp += st.top();
                st.pop();
            }
            st.pop();

            if(i > 0 && s[i - 1] == '-'){
                For(j, 0, tmp.size()){
                    if(tmp[j] == '+')
                        tmp[j] = '-';
                    else if(tmp[j] == '-')
                        tmp[j] = '+';
                }
            }

            st.push(tmp);
        }else st.push(string(1,s[i]));
    }

    string res = "";
    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> a >> b;
        a = Convert(a);
        b = Convert(b);

        if(a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
