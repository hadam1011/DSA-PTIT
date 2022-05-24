#include <bits/stdc++.h>

using namespace std;

#define tests() int t; cin >> t; cin.ignore(); while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORD(i,a,b) for(int i=a; i>=b; i--)
#define ForD(i,a,b) for(int i=a; i>b; i--)

typedef long long ll;

int n, m;

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

node Creat_Tree(int l, int r, int a[]){
	if(l > r) return NULL;

	int mid = (l + r) / 2;
	node root = new Node(a[mid]);
	root->left = Creat_Tree(l, mid - 1, a);
	root->right = Creat_Tree(mid + 1, r, a);

	return root;
}

void Pre_order(node root){
	if(root == NULL) return;

	cout << root->value << " ";

	Pre_order(root->left);
	Pre_order(root->right);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
		cin >> n;
		int a[n];
		For(i, 0, n) cin >> a[i];

		sort(a, a + n);
		node root = Creat_Tree(0, n - 1, a);

		Pre_order(root);
		cout << endl;
	}
}
