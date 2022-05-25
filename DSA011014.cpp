#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n;

struct Node{
    int data;
    Node *left, *right;
	  Node(int x){
      data = x;
      left = NULL;
      right = NULL;
	  }
};

Node* buildTree(int n){
    map<int, Node*> hasNode;
    Node *root = NULL;
    int newRoot, data;
    char branch;
    For(i, 0, n){
        cin >> newRoot >> data >> branch;
        if(hasNode.find(newRoot) == hasNode.end()){
            Node *tmp = new Node(newRoot);
            hasNode[newRoot] = tmp;
            if(root == NULL) root = tmp;
        }

        Node *currentNode = hasNode[newRoot];
        Node *tmp = new Node(data);
        if(branch == 'L') currentNode -> left = tmp;
        else currentNode -> right = tmp;
        hasNode[data] = tmp;
    }
    return root;
}

bool isLeaf(Node *node){
    return (node != NULL && node -> left ==  NULL && node -> right == NULL);
}

int sumRightLeaf(Node *root){
    if(root == NULL) return 0;
    int res = 0;
    if(isLeaf(root -> right)) res += root ->right -> data;
    res += sumRightLeaf(root -> left) + sumRightLeaf(root -> right);
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
      int n;
      cin >> n;
      cout << sumRightLeaf(buildTree(n)) << endl;
	  }
}
