#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int kq, check[20];

struct data{
    int value, cnt;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);   
    tests(){
        int n;
        cin >> n;
        queue<data> q;
        q.push({n,0});
        while(1){
            data x = q.front();
            q.pop();
            if(x.value == 1){
                cout << x.cnt << endl;
                break;
            }
            if(x.value % 3 == 0) q.push({x.value/3, x.cnt+1});
            if(x.value % 2 == 0) q.push({x.value/2, x.cnt+1});
            q.push({x.value-1, x.cnt+1});
        }
    }
}
