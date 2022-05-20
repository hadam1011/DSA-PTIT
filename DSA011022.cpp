#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v, cnt;

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

void Connect(node &root, int a, int b){
    if(b == 0)
        root->left = new Node(a);
    else
        root->right = new Node(a);
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

    if(root->left != NULL || root->right != NULL){
        cnt++;
    }

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

        cnt = 0;
        BST(root);
        cout << cnt << endl;
    }
}
