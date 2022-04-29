#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;

int FindMax(int x, int y){
    int b = 0, mx = -1;
    while(n >= x * b){
        if((n - x * b) % y == 0){
            mx = (n - x * b) / y;
            break;
        }
        b++;
    }
    return mx;
}

string cmp(string a, string b){
    if(a == b)
        return a;
    if(a.size() == b.size())
        return (a > b) ? b : a;
    return (a.size() > b.size()) ? b : a;
}

void Solve(){
    int max7 = FindMax(4, 7);
    int max4 = FindMax(7, 4);

    if(max4 == -1 && max7 == -1){
        cout << -1 << endl;
        return;
    }

    string s7 = string((n - max7 * 7) / 4, '4') + string(max7, '7');
    string s4 = string(max4, '4') + string((n - max4 * 4) / 7, '7');

    cout << cmp(s4, s7) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        Solve();
    }
}
