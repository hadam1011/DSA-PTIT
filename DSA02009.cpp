#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, kt, sum;
int a[25], check[25];
int MOD = 1e9 + 7;

void Try(int s, int cnt){
    if(cnt == k || kt == 1){
        kt = 1;
        return;
    }
    For(j,0,n){
        if(!check[j]){
            check[j] = 1;
            if(s < sum) Try(s+a[j], cnt);
            else if(s == sum) Try(0, cnt+1);
            else return;
        }
        check[j] = 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        sum = 0; kt = 0;
        For(i,0,n){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % k) kt = 0;
        else{
            memset(check, 0, sizeof(check));
            sum /= k;
            Try(0,0);
        }
        cout << kt << endl;
    }
}
