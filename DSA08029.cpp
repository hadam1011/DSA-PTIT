#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;

void Solve(string goal, string start){
    queue<pair<string, int>> q;
    q.push({start, 0});

    while(!q.empty()){
        pair<string, int> x = q.front();
        q.pop();

        if(x.first == goal){
            cout << x.second << endl;
            break;
        }

        string tmp = x.first;
        swap(tmp[1], tmp[2]);
        swap(tmp[4], tmp[5]);
        swap(tmp[1], tmp[5]);
        q.push({tmp, x.second + 1});

        swap(x.first[0], x.first[1]);
        swap(x.first[3], x.first[4]);
        swap(x.first[0], x.first[4]);
        q.push({x.first, x.second + 1});
    }
}

void ip(string &s){
    For(i, 0, 6){
        cin >> n;
        s += to_string(n);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        string start = "", goal = "";
        ip(start);
        ip(goal);

        Solve(goal, start);
    }
}
