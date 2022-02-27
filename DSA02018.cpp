#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, a[105], vt[105], check[2000], k;
vector<vector<int>> dau;
vector<int> v;

void Dsdau(int i){
    FOR(j,1,3){
        v.push_back(j);
        if(i == 4) dau.push_back(v);
        else Dsdau(i+1);
        v.pop_back();
    }
}

void kt(){
    For(i,0,dau.size()){
        int tmp = a[vt[1]];
        FOR(j,0,3){
            switch (dau[i][j]){
                case 1:{
                    tmp = tmp + a[vt[j+2]];
                    break;
                }
                case 2:{
                    tmp = tmp - a[vt[j+2]];
                    break;
                }
                case 3:{
                    tmp = tmp * a[vt[j+2]];
                    break;
                }
            }            
        }
        if(tmp == 23){
            k = 1;
            return;
        }
    }

}

void Try(int i){
    if(k) return;
    FOR(j,1,5){
        if(!check[j]){
            vt[i] = j;
            check[j] = 1;
            if(i == 5) kt();
            else Try(i+1);
            check[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Dsdau(1);
    tests(){
        FOR(i,1,5) cin >> a[i];
        k = 0;
        memset(check,0,sizeof(check));
        Try(1);
        if(k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
