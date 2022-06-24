#include <iostream>
#include <cstring>

using namespace std;

int k, n;

#define For(i, a, b) for (int i = a; i < b; i++)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define tests() int t; cin >> t; while(t--)

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

node CreateTree(node root, int x){
    if(root == NULL) return new Node(x);

    if(x < root->value) root->left = CreateTree(root->left, x);
    else root->right = CreateTree(root->right, x);

    return root;
}

void Preorder(node root){
    if(root == NULL) return;

    cout << root->value << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main(){
    tests(){
        cin >> n;
        node root = NULL;

        For(i, 0, n){
            cin >> k;
            if(root == NULL)
                root = new Node(k);
            else
               root = CreateTree(root, k);
        }

        Preorder(root);
        cout << endl;
    }
}
