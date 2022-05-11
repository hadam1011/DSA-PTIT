#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, u, v, check, height;
char x;

struct Node{
    int value, level;
    Node *left, *right;
    Node(int x){
        level = 0;
        value = x;
        left = NULL;
        right = NULL;
    }
};

typedef struct Node* node;

void Connect(node &root, int val, char x){
    node tmp = new Node(val);
    tmp->level = root->level + 1;
    if(x == 'L')
        root->left = tmp;
    else
        root->right = tmp;
}

void Creat_Tree(node &root, int a, int b, char x){
    if(root == NULL)
        return;
    if(root->value == a)
        Connect(root, b, x);
    Creat_Tree(root->left, a, b, x);
    Creat_Tree(root->right, a, b, x);
}

void Check(node root){
    if(root->left == NULL && root->right == NULL){
        if(!height)
            height = root->level;
        else if(height != root->level)
            check = 0;
        return;
    }
    if(root->left == NULL || root->right == NULL){
        check = 0;
        return;
    }

    Check(root->left);
    Check(root->right);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        height = 0;
        check = 1;
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

        Check(root);
        if(check)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
