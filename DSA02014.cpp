#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, k, check[10][10];
int X[] = {-1,-1,-1,0,0,1,1,1};
int Y[] = {-1,0,1,-1,1,-1,0,1};
string dic[101], a[10][10];
vector<string> res;

int kt(string s){
    For(i,0,k){
        if(dic[i] == s) return 1;
    }
    return 0;
}

void Try(int i, int j, string s){
    if(kt(s)) res.push_back(s);
    For(k,0,8){
        int x = i + X[k];
        int y = j + Y[k];
        if(x >= 0 && y >= 0 && x < n && y < m && !check[x][y]){
            check[x][y] = 1;
            Try(x, y, s+a[x][y]);
            check[x][y] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> k >> n >> m;
        For(i,0,k) cin >> dic[i];
        For(i,0,n){
            For(j,0,m) cin >> a[i][j];
        }
        For(i,0,n){
            For(j,0,m){
                memset(check,0,sizeof(check));
                check[i][j] = 1;
                Try(i, j, a[i][j]);
            }
        }
        if(res.empty()) cout << -1;
        else{
            For(i,0,res.size()) cout << res[i] << " ";
        }
        cout << endl;
        res.clear();
    }
}
