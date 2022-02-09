#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, m;

struct ds{
    int data, xh;
};

bool cmp(ds a, ds b){
    if(a.xh == b.xh) return a.data < b.data;
    else return a.xh > b.xh;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        ds a[n];
        map<int,int> mp;
        For(i,0,n){
            cin >> a[i].data;
            mp[a[i].data]++;
        }
        For(i,0,n) a[i].xh = mp[a[i].data];
        sort(a,a+n,cmp);
        For(i,0,n) cout << a[i].data << " ";
        cout << endl;
    }
}   

