#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
int MOD = 1e9 + 7;

string Covert(int n){
    string s = "";
    stack<int> st;
    while(n){
        st.push(n % 2);
        n /= 2;
    }
    
    while(!st.empty()){
        s += to_string(st.top());
        st.pop();
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        string input = Covert(n);

        queue<string> q;
        q.push("1");
        while(1){
            string x = q.front();
            q.pop();
            if(x == input) break;
            cout << x << " ";
            q.push(x + "0");
            q.push(x + "1");
        }
        cout << input << endl;
    }
}
