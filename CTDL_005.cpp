#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, k, x;
int MOD = 1e9 + 7;

struct Node{
    int value;
    Node* next;
};

typedef struct Node* node;

void printList(node head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }
}

void insertNode(node &head, int x){
    node tmp = new Node();
    tmp->value = x;
    tmp->next = NULL;

    if(head == NULL) head = tmp;
    else{
        node p = head;
        while(p->next != NULL) p = p->next;
        p->next = tmp;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int a[n];
    For(i,0,n) cin >> a[i];
    cin >> k;

    node head = new Node();
    head = NULL;
    For(i,0,n){
        if(a[i] != k){
            insertNode(head, a[i]);
        }
    }

    printList(head);
}
