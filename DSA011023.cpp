#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v, lv;

struct Node{
    int value, level;
    Node *left, *right;
    Node(int x){
        value = x;
        level = 0;
        left = NULL;
        right = NULL;
    }
};

typedef struct Node* node;

void Connect(node &root, int a, int b){
    node x = new Node(a);
    x->level = root->level + 1;
    if (b == 0)
        root->left = x;
    else
        root->right = x;
}

void Creat_Tree(node &root, int c){
    if(root->value == c) return;

    if(root->left == NULL && root->value > c)
        Connect(root, c, 0);
    else if(root->right == NULL && root->value < c)
        Connect(root, c, 1);

    if(root->value < c)
        Creat_Tree(root->right, c);
    else
        Creat_Tree(root->left, c);
}

void BST(node root){
    if(root == NULL) return;

    lv = max(lv, root->level);

    BST(root->left);
    BST(root->right);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        node root = NULL;
        For(i, 0, n){
            cin >> u;
            if(root == NULL)
                root = new Node(u);
            else
                Creat_Tree(root, u);
        }

        lv = 0;
        BST(root);
        cout << lv << endl;
    }
}
