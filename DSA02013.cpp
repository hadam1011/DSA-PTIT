#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, p, check[205], a[205];
int spt = 1;
vector<vector<int>> res;
vector<int> v;

void Sangnt(){
    memset(check, 1, sizeof(check));
    check[0] = 0; check[1] = 0;
    FOR(i,2,200){
        if(check[i]){
            for(int j=i+i; j<=200; j+=i)
                check[j] = 0;
            a[spt++] = i;
        }
    }
}

void Try(int start, int end, int s){
    For(i, start, end){
        if(s >= a[i]){
            v.push_back(a[i]);
            if(s-a[i] == 0 && v.size() == n) res.push_back(v);
            else Try(i+1, end, s-a[i]); 
            v.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Sangnt();   
    tests(){
        int s, start, end;
        cin >> n >> p >> s;
        start = lower_bound(a, a+spt, p) - a;
        end = lower_bound(a, a+spt, s) - a;

        v.clear();
        Try(start+1, end, s);

        cout << res.size() << endl;
        For(i,0,res.size()){
            For(j,0,res[i].size()) 
                cout << res[i][j] << " ";
            cout << endl;
        }
        res.clear();
    }
}
