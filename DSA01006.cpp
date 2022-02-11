#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, a[15], check[15];
vector<string> res;

void Try(int i){
    FOR(j,1,n){
        if(!check[j]){
            a[i] = j;
            check[j] = 1;
            if(i == n){
                string tmp = "";
                FOR(k,1,n) tmp += to_string(a[k]);
                res.push_back(tmp);
            }
            else Try(i+1);
            check[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        memset(check,0,sizeof(check));
        Try(1);
        for(int i=res.size()-1; i>=0; i--) cout << res[i] << " ";
        cout << endl;
        res.clear();
    }   
}
