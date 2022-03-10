#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;
int MOD = 1e9 + 7;

struct task{
    int JobId, Deadline, Profit;
};

bool cmp(task a, task b){
    return a.Profit > b.Profit;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        task a[1001];
        For(i,0,n) cin >> a[i].JobId >> a[i].Deadline >> a[i].Profit;
        sort(a, a+n, cmp);
        int res = 0, cnt = 0, kt[1001];
        memset(kt, 0, sizeof(kt));
        For(i,0,n){
            while(kt[a[i].Deadline] && a[i].Deadline > 0) a[i].Deadline--;
            if(a[i].Deadline > 0 && !kt[a[i].Deadline]){
                kt[a[i].Deadline] = 1;
                cnt++;
                res += a[i].Profit;
            }
        }
        cout << cnt << " " << res << endl;
    }
}
