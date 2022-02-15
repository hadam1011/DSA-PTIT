#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int a[25], n, k, s, cnt;

void kt(){
    int sum = 0;
    FOR(i,1,k) sum += a[i];
    if(sum == s) cnt++;
}

void Try(int i){
    FOR(j,a[i-1]+1,n-k+i){
        a[i] = j;
        if(i == k) kt();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while(1){
        cin >> n >> k >> s;
        cnt = 0;
        if(!n && !k && !s){
            break;
        }
        Try(1);
        cout << cnt << endl;
    }
}
