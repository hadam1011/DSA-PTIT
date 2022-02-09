#include <bits/stdc++.h>

using namespace std;
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<=b; i++)
int n,a[100];

void in(){
    For(i,1,n) cout << a[i];
    cout << " ";
}

void Solve(){
    For(i,1,n) a[i] = i;
    in();
    while(1){
        int i = n;
        while(i>1 && a[i] < a[i-1]) i--; // tìm vị trí i đầu tiên sao cho a[i] > a[i-1]
        if(i == 1) break; // đã tìm đc cấu hình cuối cùng
        int max=n, pos;
        For(j,i,n){ // tìm số nhỏ nhất lớn hơn a[i-1] từ vị trí i đến cuối
            if(a[j]>a[i-1] && a[j]<=max){
                pos = j;
                max = a[j];
            }
        }
        swap(a[i-1],a[pos]); 
        int l=i, r=n; 
        while(l < r) swap(a[l++],a[r--]); // đảo ngược dãy con bắt đầu từ vị trí i+1
        in();
    }
}

int main(){
    test(){
        cin >> n; 
        Solve();
        cout << endl;
    }
}
