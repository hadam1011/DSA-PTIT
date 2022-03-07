#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int MOD = 1e9 + 7;

int Convert1(string s){    // 6 -> 5
    int tmp = 0;
    For(i,0,s.size()){
        if(s[i] == '6') s[i] = '5';
        tmp = tmp*10 + (s[i] - '0');
    }
    return tmp;
}

int Convert2(string s){    // 5 -> 6  
    int tmp = 0;
    For(i,0,s.size()){
        if(s[i] == '5') s[i] = '6';
        tmp = tmp*10 + (s[i] - '0');
    }
    return tmp;
}

int MinSum(int a, int b){   
    return Convert1(to_string(a)) + Convert1(to_string(b));
}

int MaxSum(int a, int b){
    return Convert2(to_string(a)) + Convert2(to_string(b));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << MinSum(a, b) << " " << MaxSum(a, b) << endl;
}
