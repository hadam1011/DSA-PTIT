#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, a[101], kt;

void Try(int i, int sum, int k){
    For(j,i,n){
        sum += a[j];
        if(kt || sum > k/2) return;
        if(sum == k/2){
            kt = 1;
            return;
        }else Try(j+1,sum,k);
        sum -= a[j];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int sum = 0; kt = 0;
        For(i,0,n){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 == 0){
            sort(a,a+n);
            Try(0,0,sum);
        } 
        if(kt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
