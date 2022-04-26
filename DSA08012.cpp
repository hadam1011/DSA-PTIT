#include <bits/stdc++.h>
#include <deque>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
int MOD = 1e9 + 7;

int check(int x){
    int cnt[7] = {};

    while(x){
        if(x % 10 > 5)
            return 0;
        cnt[x % 10]++;
        x /= 10;
    }

    For(i, 0, 6){
        if(cnt[i] > 1)
            return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        int res = 0;

        FOR(i, n, m){
            if(check(i))
                res++;
        }

        cout << res << endl;
    }
}
