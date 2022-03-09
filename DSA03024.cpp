#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, kq;
int MOD = 1e9 + 7;

struct task{
    int st, finished;
};

bool cmp(task a, task b){
    return a.finished < b.finished;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        task a[100001];
        For(i,0,n) cin >> a[i].st >> a[i].finished;
        sort(a, a+n, cmp);
        int i = 0; kq = 1;
        For(j,1,n){
            if(a[j].st >= a[i].finished){
                kq++;
                i = j;
            }
        }
        cout << kq << endl;    
    }
}
