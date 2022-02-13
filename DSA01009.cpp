#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, kq, a[20], res = 0;
vector<string> v;

void in(){
    cnt = 0, kq = 0;
    FOR(i,1,n){
        if(a[i] == 0) cnt++;
        else cnt = 0;
        kq = max(cnt, kq);
    }
    if(kq != k) return;
    res++;
    string tmp = "";
    FOR(i,1,n){
        if(a[i]) tmp += "B";
        else tmp += "A";
    }
    v.push_back(tmp);
}

void Try(int i){
    FOR(j,0,1){
        a[i] = j;
        if(i == n) in();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    Try(1);
    cout << v.size() << endl;
    For(i,0,v.size()) cout << v[i] << endl;
}
