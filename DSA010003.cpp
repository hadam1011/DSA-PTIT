#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, x, y;
int parent[1001], sz[1001];
vector<pair<int, int>> edge;

void Make_Set(){
    FOR(i, 1, n){
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int i){
    if(i == parent[i])
        return i;
    return Find(parent[i]);
}

bool Union(int a, int b){
    a = Find(a);
    b = Find(b);
    
    if(a == b) return false;
    
    if(sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
}

int Solve(){
    For(i, 0, m){
        if(!Union(edge[i].first, edge[i].second)) return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        For(i, 0, m){
            cin >> x >> y;
            edge.push_back({x, y});
        }

        Make_Set();
        if(Solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        edge.clear();
    }
}
