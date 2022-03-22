#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, kt, spt;
int hv[15];
string s;
int MOD = 1e9 + 7;

void check(){
    string tmp = s;
    int pos = 1;
    For(i,0,s.size()){
        if(s[i] == '?' && i != 3){
            tmp[i] = char(hv[pos++] + '0');
        }
    }

    if(tmp[0] == '0' || tmp[5] == '0' || tmp[10] == '0') return;
    
    int a = (tmp[0] - '0')*10 + (tmp[1] - '0');
    int b = (tmp[5] - '0')*10 + (tmp[6] - '0');
    int c = (tmp[10] - '0')*10 + (tmp[11] - '0');

    if(s[3] == '?' || s[3] == '-'){
        if(a - b == c){
            kt = 1;
            s = tmp;
            s[3] = '-';

        }
    }
    if(s[3] == '?' || s[3] == '+'){
        if(a + b == c){
            kt = 1;
            s = tmp;
            s[3] = '+';
        }
    }
}

void Try(int i){
    FOR(j,0,9){
        if(kt) return;
        hv[i] = j;
        if(i == spt) check();
        else Try(i+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        getline(cin, s);

        kt = 0;
        if(s[3] != '/' && s[3] != '*'){
            spt = 0;
            For(i,0,s.size()){
                if(s[i] == '?' && i != 3) spt++;
            }
            if(spt) Try(1);
            else check();
        }   
        
        if(kt) cout << s << endl;
        else cout << "WRONG PROBLEM!" << endl;
    }
}
