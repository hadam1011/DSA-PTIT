#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, res;
int MOD = 1e9 + 7;

struct task{
    int st, finish;
};

bool cmp(task a, task b){
    return a.finish < b.finish;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        task a[1001];
        For(i,0,n) cin >> a[i].st;
        For(i,0,n) cin >> a[i].finish;
        sort(a, a+n, cmp);
        int i = 0; res = 1;
        For(j,1,n){
            if(a[j].st >= a[i].finish){
                res++;
                i = j;
            }
        }
        cout << res << endl;
    }
}
