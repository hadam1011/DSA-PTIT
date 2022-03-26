#include <bits/stdc++.h>
#include <deque>

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
    deque<int> q;
    tests(){
        cin >> s;
        if(s.find("PUSH") != -1){
            cin >> n;
            if(s == "PUSHBACK") q.push_back(n);
            else q.push_front(n);
        }else if(s.find("POP") != -1 && !q.empty()){
            if(s == "POPBACK") q.pop_back();
            else q.pop_front();
        }else if(s.find("PRINT") != -1){
            if(q.empty()) cout << "NONE" << endl;
            else if(s == "PRINTBACK") cout << q.back() << endl;
            else cout << q.front() << endl;
        }
    }
}
