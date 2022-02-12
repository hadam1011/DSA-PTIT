#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k, check[15], a[1001];
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        string s;
        cin >> s;
        cout << n << " ";
        int j = s.length()-1, ln = s.length()-1;
        while(s[j] <= s[j-1] && j > 0) j--;
        if(j == 0) cout << "BIGGEST";
        else{
            k = j - 1;
            while(s[ln] <= s[k]) ln--;
            swap(s[ln], s[k]);
            int l = j, r = s.length()-1;
            while(l < r){
                swap(s[l], s[r]);
                l++; r--;
            }
            For(i,0,s.length()) cout << s[i];
        }
        cout << endl;
    }   
}
