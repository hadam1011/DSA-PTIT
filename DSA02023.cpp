#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, check[20];
string a[30];

void Try(int i, string s, int spt){
    if(i == cnt+1) return;
    if(spt == k){
        cout << s << endl;
        return;
    }
    string tmp = s;
    tmp += " " + a[i];
    Try(i+1,tmp,spt+1);
    Try(i+1,s,spt);
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    string s;
    set<string> st;
    cnt = 0; 
    For(i,0,n){
        cin >> s;
        st.insert(s);
    }
    for(string x : st) a[cnt++] = x;
    For(i,0,cnt-k+1){
        string tmp = "";
        tmp += a[i];
        Try(i+1,tmp,1);
    }
}
