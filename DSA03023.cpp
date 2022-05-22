#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, j, res = 0;
int x = 0, t = 0;
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> s;

    For(i, 0, s.size()){
        if(s[i] == 'X') x++;
        else if(s[i] == 'T') t++;
    }

    For(i, 0, x){
        if(s[i] != 'X'){
            if(s[i] == 'T') j = s.find('X', x);
            else j = s.rfind('X');
            swap(s[i], s[j]);
            res++;
        }
    }

    For(i, x, x + t){
        if(s[i] != 'T') res++;
    }

    cout << res;
}
