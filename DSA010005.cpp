#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m, x, y, ts;
int parent[105], sz[105];

struct edge{
    int u, v, w;
};

vector<edge> canh;

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
    sz[b] += sz[a];
    return true;
}

bool cmp(edge a, edge b){
    return a.w < b.w;
}

void Kruskal(){
    int d = 0;
    vector<edge> T;
    sort(canh.begin(), canh.end(), cmp);
    
    For(i, 0, m){
        if(T.size() == n - 1) break;
        edge x = canh[i];
        
        if(Union(x.u, x.v)){
            T.push_back(x);
            d += x.w;
        }
    }

    cout << d << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> m;
        For(i, 0, m){
            cin >> x >> y >> ts;
            canh.push_back({x, y, ts});
        }

        Make_Set();
        Kruskal();
        canh.clear();
    }
}
