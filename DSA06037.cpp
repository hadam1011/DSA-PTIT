#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

typedef long long ll;

int n, pos;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[n], vt = 1, amin = INT_MAX, amax;
        map<int,int> mp;
        For(i,0,n){
            cin >> a[i];
            if(i > 0){
                if(amin > a[i]) amin = a[i];
                mp[a[i]]++;
            }
        }
        amax = a[0];
        if(amax <= amin) v.push_back(1);
        while(vt < n-1){
            if(a[vt] > amax) amax = a[vt];
            mp[a[vt]]--;
            if(mp[a[vt]] == 0) mp.erase(a[vt]);
            if(a[vt] == amin){
                for(auto x : mp){
                    amin = x.first;
                    break;
                }
            } 
            if(amax <= amin) v.push_back(vt+1);
            vt++;
        }
        if(v.empty()) cout << 0 << endl;
        else{
            cout << v.size() << endl;
            For(i,0,v.size()) cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
}
