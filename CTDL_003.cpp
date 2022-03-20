#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, x[105], kq = 0;
string s = "";
int MOD = 1e9 + 7;

struct data{
    int value, weight;
} a[105];

void kt(){
    int total_value = 0, total_weight = 0;
    string tmp = "";
    FOR(i,1,n){
        if(x[i]){
            total_value += a[i].value;
            total_weight += a[i].weight;
        }
        tmp += to_string(x[i]);
    }
    if(total_value > kq && total_weight <= k){
        kq = total_value;
        s = tmp;
    }
}

void Try(int i){
    FOR(j,0,1){
        x[i] = j;
        if(i == n) kt();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    FOR(i,1,n) cin >> a[i].value;
    FOR(i,1,n) cin >> a[i].weight;
    Try(1);
    cout << kq << endl;
    For(i,0,s.size()) cout << s[i] << " ";
}
