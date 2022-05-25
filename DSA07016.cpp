#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
		cin >> s;
		stack<int> st;

		FOR(i, 0, s.size()){
			st.push(i + 1);
			if(s[i] == 'I'){
				while(!st.empty()){
					cout << st.top();
					st.pop();
				}
			}
		}

		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}
