#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;
string s;

void Solve(){
    int open = 0, close = 0, res = 0;
    for(auto i : s){
		if(i == '['){
			if(open < close){
				res += (close - open);
				close--;
			}
			else open++;
		}
		else close++;
	}
    cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Catalan_Number();
    tests(){
        cin >> s;
        Solve();
    }
}
