#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
string x;

void Solve(){
	vector<string> s1, s2;
	cin >> n;
	For(i, 0, n){
		cin >> u >> v >> x;
		s1.push_back(to_string(u) + to_string(v) + x);
	}

	cin >> m;
	For(i, 0, m){
		cin >> u >> v >> x;
		s2.push_back(to_string(u) + to_string(v) + x);
	}

	if(n == m){
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		For(i, 0, n){
			if(s1[i] != s2[i]){
				cout << 0 << endl;
				return;
			}
		}

		cout << 1 << endl;
	}else cout << 0 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
	Solve();
    }
}
