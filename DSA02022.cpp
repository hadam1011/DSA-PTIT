#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;
const ll MOD = 1e9+7;
int num[2] = {0,2}, a[10];

void in(){
    if((!a[1] && !a[2]) || (!a[3] && !a[4])) return;
    if(!a[5] || a[3] == 2) return;
    FOR(i,1,8){
        cout << a[i];
        if(i == 2 || i == 4) cout << "/";
    }
    cout << endl;
}

void Try(int i){
    FOR(j,0,1){
        a[i] = num[j];
        if(i == 8) in();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);  
    Try(1);
}
