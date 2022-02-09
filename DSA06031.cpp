#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[100001], kt = 0;
        stack<int> st;
        For(i,0,n) cin >> a[i];
        deque<int> q;
        For(i,0,k){
            while(!q.empty() && a[i] > a[q.back()]) q.pop_back();
            q.push_back(i);
        }
        cout << a[q.front()] << " ";
        For(i,k,n){
            if(q.front() <= i - k) q.pop_front();
            while(!q.empty() && a[i] > a[q.back()]) q.pop_back();
            q.push_back(i);
            cout << a[q.front()] << " ";
        }
        cout << endl;
    }
}   

