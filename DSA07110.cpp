#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
string s;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        stack<char> st;
        cin >> s;
        k = 0;
        For(i,0,s.size()){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            else if(!st.empty()){
                if(s[i] == ')' && st.top() == '(') st.pop();
                if(s[i] == '}' && st.top() == '{') st.pop();
                if(s[i] == ']' && st.top() == '[') st.pop();
            }
            else{
                k = 1;
                break;
            }
        }
        if(k || !st.empty()) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
