#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
      cin >> n;
      ll a[n], left[n], right[n];
      for(int &x : a)	cin >> x;
      stack<ll> st1, st2;

      For(i, 0, n){
        while(!st1.empty() && a[st1.top()] >= a[i]) st1.pop();
        if(st1.empty())	left[i] = i+1;
        else left[i] = i - st1.top();
        st1.push(i);
      }

      FORD(i, n - 1, 0){
        while(!st2.empty() && a[st2.top()] >= a[i]) st2.pop();
        if(st2.empty())	right[i] = n - i;
        else right[i] = st2.top() - i;
        st2.push(i);
      }

      ll maxs = 0;
      For(i, 0, n)
        if(left[i] + right[i] - 1 >= a[i])
          maxs = max(maxs, a[i]);
      cout<< maxs <<endl;
    }
}
