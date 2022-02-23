#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, a[50], check[50], spt = 0; 
string s = "";

void in(){
    For(i,0,s.size()-1){
        if(s[i] > s[i+1]) return;
    }
    cout << s << endl;
}

void Try(){
    FOR(j,1,n){
        s += char('A' + j - 1);
        spt++;
        if(spt == k) in();
        else Try();
        s.erase(s.size()-1); 
        spt--;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char x;
    cin >> x >> k;
    n = x - 'A' + 1;
    Try();
}
