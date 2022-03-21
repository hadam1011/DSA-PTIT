#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k;
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        int n;
        cin >> n;
        int a[n], b[n];
        memset(b, -1, sizeof(b));
        For(i,0,n) cin >> a[i];

        stack<int> st;
        st.push(0);
        For(i,1,n){
            if(st.empty()) st.push(i);
            else{
                while(a[i] > a[st.top()]){
                    b[st.top()] = a[i];
                    st.pop();
                    if(st.empty()) break;
                }
                st.push(i);
            }
        }

        For(i,0,n) cout << b[i] << " ";
        cout << endl;
    }
}
