#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
int MOD = 1e9 + 7;

string MinNum(string s, int k){
    string res = "";
    int cnt = k / 9;
    if(cnt == n-1 && k % 9) res = to_string(k % 9) + string(cnt, '9');
    else{
        k--;
        cnt = k / 9;
        res = "1" + string(n-2-cnt, '0') + to_string(k % 9) + string(cnt, '9');
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> k >> n;

        int kt = 0;
        string minn;
        if(k != 0 && n*9 >= k){
            if(n == 1) minn = to_string(k);
            else minn = MinNum(minn, k);
            kt = 1;
        }

        if(kt == 0) cout << -1 << endl;
        else cout << minn << endl;
    }
}
