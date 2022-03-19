#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, res = 0;
int a[15][15], check[15];
vector<int> v;
vector<vector<int>> kq;
int MOD = 1e9 + 7;

void Try(int i, int sum){
    FOR(j,1,n){
        if(!check[j]){
            check[j] = 1;
            sum += a[i][j];
            v.push_back(j);
            if(sum == k && i == n){
                kq.push_back(v);
                res++;
            }else if(sum < k) Try(i+1, sum);
            check[j] = 0;
            sum -= a[i][j];
            v.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    FOR(i,1,n){
        FOR(j,1,n) cin >> a[i][j];
    }
    memset(check, 0, sizeof(check));
    Try(1, 0);
    cout << res << endl;
    For(i,0,res){
        For(j,0,n) cout << kq[i][j] << " ";
        cout << endl;
    }
}
