#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, k, kq, kt, check[35][35], a[35][35];
vector<string> v;

void Try(int i, int j, string s){
    if(i == n-1 && j == n-1){
        v.push_back(s);
        kt = 1;
        return;
    }
    check[i][j] = 1;
    if(i < n-1 && a[i+1][j] == 1 && !check[i+1][j]){
        s += "D";
        Try(i+1, j, s);
        s.erase(s.size()-1);
    }
    if(j > 0 && a[i][j-1] == 1 && !check[i][j-1]){
        s += "L";
        Try(i, j-1, s);
        s.erase(s.size()-1);
    }
    if(i > 0 && a[i-1][j] == 1 && !check[i-1][j]){
        s += "U";
        Try(i-1, j, s);
        s.erase(s.size()-1);
    }
    if(j < n-1 && a[i][j+1] == 1 && !check[i][j+1]){
        s += "R";
        Try(i, j+1, s);
        s.erase(s.size()-1);
    }
    check[i][j] = 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        kt = 0;
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        For(i,0,n){
            For(j,0,n) cin >> a[i][j];
        }
        Try(0,0,"");
        sort(v.begin(),v.end());
        if(!kt || !a[0][0]) cout << -1;
        else For(i,0,v.size()) cout << v[i] << " ";
        cout << endl;
        v.clear();
    }
}
