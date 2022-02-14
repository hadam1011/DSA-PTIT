#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k;
vector<string> v;
string s;

void Try(int i, string x){
    if(i == n){
        v.push_back(x);
        return;
    }
    string tmp = x + s[i];
    Try(i+1,tmp);
    Try(i+1,x);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        cin >> s;
        For(i,0,s.size()){
            string tmp = "";
            tmp += s[i];
            Try(i+1,tmp);
        }
        sort(v.begin(),v.end());
        For(i,0,v.size()) cout << v[i] << " ";
        cout << endl;
        v.clear();
    }
}
