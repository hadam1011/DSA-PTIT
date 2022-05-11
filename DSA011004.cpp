#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v;
char x;

struct Node{
    int value;
    Node *left, *right;
    Node(int x){
        value = x;
        left = NULL;
        right = NULL;
    }
};

typedef struct Node* node;

void Connect(node &root, int val, char x){
    if(x == 'L')
        root->left = new Node(val);
    else
        root->right = new Node(val);
}

void Creat_Tree(node &root, int a, int b, char x){
    if(root == NULL)
        return;
    if(root->value == a)
        Connect(root, b, x);
    Creat_Tree(root->left, a, b, x);
    Creat_Tree(root->right, a, b, x);
}

void Binary_Tree(node root){
    queue<node> q;
    q.push(root);

    while(!q.empty()){
        node x = q.front();
        cout << x->value << " ";
        q.pop();
        
        if(x->left != NULL) q.push(x->left);
        if(x->right != NULL) q.push(x->right);
    }

    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        node root = NULL;
        cin >> n;
        while(n--){
            cin >> u >> v >> x;
            if(root == NULL){
                root = new Node(u);
                Connect(root, v, x);
            }
            else
                Creat_Tree(root, u, v, x);
        }

        Binary_Tree(root);
    }
}
