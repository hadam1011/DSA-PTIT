#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int k;
string n, m;

string Solve(){
    string res = "";
    int nho = 0;

    if(n.size() > m.size()) swap(n, m);
    n = string(m.size() - n.size(), '0') + n;

    int len = n.size();
    FORD(i, len - 1, 0){
        int a = n[i] - '0';
        int b = m[i] - '0';
        int x = a + b + nho;

        if(i > 0) res += to_string(x % k);
        else{
            int tmp = x;
            while(tmp){
                res += to_string(tmp % k);
                tmp /= k;
            }
        }

        nho = x / k;
    }

    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> k >> n >> m;
        cout << Solve() << endl;
    }
}
