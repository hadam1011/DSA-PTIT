
#include<bits/stdc++.h>
using namespace std;
int n,a[100],k;
bool ok;
vector<vector<int>> res;
void Save(){
    vector<int> v;
    for(int i=1;i<=k;i++){
        v.push_back(a[i]);
    }
    res.push_back(v);
}
void solve(){
    int i=k,b,c;
    while(a[i]==1) i--;
    if(!i) ok=true;
    else{
        a[i]--;
        int tmp=k-i+1; //dem so so 1
        b=tmp/a[i]; c=tmp%a[i]; k=i;
        if(b>0) {
            for(int j=i+1;j<=i+b;j++) a[j]=a[i];
            k+=b;
        }
        if(c>0){
            k++;
            a[k]=c;
        }
    }
    
}
int main(){
    int t; cin>>t;
    while(t--){
        res.clear();
        cin>>n;
        a[1]=n;
        ok=false,k=1;
        while(!ok){
            Save();
            solve();
        }
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            cout<<"(";
            for(int j=0;j<res[i].size()-1;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<res[i][res[i].size()-1]<<") ";
        }
        cout<<endl;
    }
}
