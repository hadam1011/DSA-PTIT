#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;
string s, a[105];

string Mul(string s1, string s2){
    int len1 = s1.size();
    int len2 = s2.size();
    int len = len1 + len2;
    vector<int> a, b;

    For(i, 0, len1) a.push_back(int(s1[i] - '0'));
    For(i, 0, len2) b.push_back(int(s2[i] - '0'));

    vector<vector<int>> res(len2);
    int index = 0;
    FORD(i, len2 - 1, 0){
        int t = 0;
        while(t < index){
            res[index].push_back(0);
            t++;
        }
      
        int nho = 0, so = 0;
        FORD(j, len1 - 1, 0){
            so = a[j] * b[i] + nho;
            res[index].push_back(so % 10);
            nho = so / 10;
        }

        if(nho > 0) res[index].push_back(nho);
        while(res[index].size() < len) res[index].push_back(0);
        reverse(res[index].begin(), res[index].end());
        index++;
    }
  
    int nho = 0;
    string ans = "";
    FORD(j, res[0].size() - 1, 0){
        int so = nho;
        For(i, 0, res.size()) so += res[i][j];
        ans = char(so % 10 + '0') + ans;
        nho = so / 10;
    }

    if(nho > 0) ans = char(nho + '0') + ans;
    while(ans[0] == '0') ans.erase(ans.begin());
    return ans;    
}

string Add(string a, string b){
    string res = "";
    int nho = 0;

    while(a.size() < b.size()) a = "0" + a;
    while(a.size() > b.size()) b = "0" + b;
    int len = a.size() - 1;

    FORD(i, len, 0){
        int num = (a[i] - '0') + (b[i] - '0') + nho;
        res = char(num % 10 + '0') + res;
        nho = num / 10;
    }

    if(nho > 0) res = char(nho + '0') + res;
    return res;
}

void Catalan_Number(){
    a[0] = "1";
    a[1] = "1";
    For(i, 2, 101){
        a[i] = "0";
        For(j, 0, i){
            string x = Mul(a[j], a[i - j - 1]);
            a[i] = Add(a[i], x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Catalan_Number();
    tests(){
        cin >> n;
        cout << a[n] << endl;
    }
}
