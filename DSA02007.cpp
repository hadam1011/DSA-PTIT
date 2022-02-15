#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, cnt, k, check[20];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        string s;
        cin >> s;
        For(i,0,s.size()){
            char tmp = s[s.size()-1];
            int vt = s.size() - 1;
            for(int j=s.size()-1; j>i && n>0; j--){
                if(s[j] > tmp){
                    tmp = s[j];
                    vt = j;
                }
            }
            if(tmp > s[i] && n > 0){
                swap(s[i], s[vt]);
                n--;
            }        
        }
        cout << s << endl;
    }
}
