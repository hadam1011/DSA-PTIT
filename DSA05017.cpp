#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;
int n, a[100];
int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        For(i, 0, n) cin >> a[i];

        int left[100], right[100];
        For(i, 0, n){
            left[i] = a[i];
            For(j, 0, i){
                if(a[i] > a[j])
                    left[i] = max(left[i], left[j] + a[i]);
            }
        }

        FORD(i, n, 0){
            right[i] = a[i];
            ForD(j, n-1, i){
                if(a[i] > a[j])
                    right[i] = max(right[i], right[j] + a[i]);
            }
        }

        int kq = 0;
        For(i, 0, n){
            kq = max(kq, right[i] + left[i] - a[i]);
        }

        cout << kq << endl;
    }   
}
