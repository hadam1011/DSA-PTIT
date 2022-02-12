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
        vector<string> L1, L2;
        L1.push_back("0"); L1.push_back("1"); 
        L2.push_back("1"); L2.push_back("0");
        cnt = 1;
        while(cnt < n){
            For(i,0,L1.size()) L1[i] = "0" + L1[i];
            For(i,0,L2.size()){
                L2[i] = "1" + L2[i];
                L1.push_back(L2[i]);
            }
            L2.clear();
            for(int i=L1.size()-1; i>=0; i--) L2.push_back(L1[i]);
            cnt++;
        }
        For(i,0,L1.size()) cout << L1[i] << " ";
        cout << endl;
    }   
}
