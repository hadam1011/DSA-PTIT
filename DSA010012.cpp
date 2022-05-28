#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, u, v;
double res, cnt;
int a[101][101];

void Dijktra(int s){
    vector<int> d(n + 1, 1e9);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    d[s] = 0;
    q.push({0, s});

    while(!q.empty()){
        pair<int,int> x = q.top();
        q.pop();

        int len = x.first;
        int u = x.second;
        if(len > d[u]) continue;

        FOR(i, 1, n){
            if(a[u][i] && d[i] > d[u] + 1){
                d[i] = d[u] + 1;
                q.push({d[i], i});
            }
        } 
    }

    FOR(i, 1, n){
        if(i != s && d[i] != 1e9){
            cnt++;
            res += d[i];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        memset(a, 0, sizeof a);
        res = 0;
        cnt = 0;
        cin >> n >> m;
        For(i, 0, m){
            cin >> u >> v;
            a[u][v] = 1;
        }

        FOR(i, 1, n){
            Dijktra(i);
        }

        res /= cnt;
        cout << fixed << setprecision(2) << res << endl;
    }
}
