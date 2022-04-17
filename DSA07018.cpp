#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;
string s1, s2;
vector<string> f1, f2;
int MOD = 1e9 + 7;

struct Node{
    int value, deg;
    Node *next;
};

typedef Node *node;

void tach1(){
    string tmp;
    stringstream ss(s1);
    while(ss >> tmp){
        if(tmp != "+") f1.push_back(tmp);
    }
}

void tach2(){
    string tmp;
    stringstream ss(s2);
    while(ss >> tmp){
        if(tmp != "+") f2.push_back(tmp);
    }
}

node make_node(string s){
    node x = new Node();
    int n = 0;
    For(i, 0, s.size()){
        if(isdigit(s[i])){
            n = n * 10 + (s[i] - '0');
        }else
            break;
    }
    x->value = n;

    int pos = s.find('^') + 1;
    n = 0;
    For(i, pos, s.size()){
        n = n * 10 + (s[i] - '0');
    }
    x->deg = n;
    x->next = nullptr;

    return x;
}

void solve(node& head, string s){
    node tmp = new Node();
    tmp = make_node(s);

    if(head == NULL){
        head = tmp;
        return;
    }
    
    if(tmp->deg > head->deg){
        tmp->next = head;
        head = tmp;
    }else{
        node p = new Node();
        node pre = new Node();
        p = head;

        while(tmp->deg < p->deg && p->next != NULL){
            pre = p;
            p = p->next;
        }

        if(tmp->deg == p->deg){
            p->value += tmp->value;
        }else if(p->next == NULL && p->deg > tmp->deg){
            p->next = tmp;
        }else{
            pre->next = tmp;
            tmp->next = p;
        }
    }
}

void print(node head){
    string s = "";

    while(head != NULL){
        s += to_string(head->value) + "*x^" + to_string(head->deg) + " + ";
        head = head->next;
    }

    s.erase(s.size() - 3);

    cout << s << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        getline(cin, s1);
        getline(cin, s2);
        tach1();
        tach2();

        node head = new Node();
        head = NULL;

        For(i, 0, f1.size()){
            solve(head, f1[i]);
        }

        For(i, 0, f2.size()){
            solve(head, f2[i]);
        }

        print(head);
        f1.clear();
        f2.clear();
    }
}
