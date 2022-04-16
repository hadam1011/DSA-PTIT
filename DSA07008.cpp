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

int kt(char x){
    if(x == '^')
        return 3;
    if(x == '*' || x == '/')
        return 2;
    if(x == '+' || x == '-') 
        return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> s;
        stack<char> st;

        For(i, 0, s.size()){
            if(isalpha(s[i]))
                cout << s[i];
            else if(s[i] == '(')
                st.push(s[i]);
            else{
                if(s[i] == ')'){
                    while(st.top() != '('){
                        cout << st.top();
                        st.pop();
                    }
                    st.pop();
                }else{
                    while(!st.empty() && kt(s[i]) <= kt(st.top())){
                        cout << st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
            
        }

        while(!st.empty()){
            char x = st.top();
            if(x != '(') cout << x;
            st.pop();
        }

        cout << endl;
    }
}
