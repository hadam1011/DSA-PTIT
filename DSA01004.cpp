#include <bits/stdc++.h>

using namespace std;

#define test() int t; cin >> t; while(t--)
int n,k,a[100];

void in(){
    for(int i=1; i<=k; i++) cout << a[i];
    cout << " ";
}

void Try(int i){
    for(int j=a[i-1]+1; j<=i+n-k; j++){
        a[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}

int main(){ 
    test(){
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}
