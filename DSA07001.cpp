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
    vector<int> v;
    stack<int> st;
    while(cin >> s){
        if(s == "push"){
            cin >> n;
            st.push(n);
            v.push_back(n);
        }else if(s == "pop"){
            st.pop();
            v.pop_back();
        }
        else if(st.empty()) cout << "empty" << endl;
        else{
            For(i,0,v.size()) cout << v[i] << " ";
            cout << endl;
        }
    }
}
