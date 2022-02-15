#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, kt, a[15], k;

void in(){
    cout << "(";
    For(i,1,k) cout << a[i] << " ";
    cout << a[k] << ") "; 
}

void sinh(){
    int i = k, j, d, b, c;
    while(a[i] == 1) i--;
    if(!i) kt = 1;
    else{
        a[i]--;
        d = k - i + 1;
        b = d/a[i]; c = d%a[i]; k = i;
        if(b > 0){
            FOR(j,i+1,i+b) a[j] = a[i];
            k += b;
        }
        if(c > 0){
            k++;
            a[k] = c;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        a[1] = n; a[0] = 0;
        kt = 0; k = 1;
        while(!kt){
            in();
            sinh();
        }
        cout << endl;
    }
}
