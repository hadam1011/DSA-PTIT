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
        getline(cin, s);
        int kt = 0, cnt = 0;
        stack<char> st;
        
        For(i, 0, s.size()){
            if(s[i] != ')') st.push(s[i]);
            else{
                if(st.top() == '(' || cnt == 1){
                    kt = 1;
                    break;
                }

                cnt = 0;
                while(st.top() != '('){
                    st.pop();
                    cnt++;
                }
                st.pop();
            }

        }

        if(kt || cnt == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
