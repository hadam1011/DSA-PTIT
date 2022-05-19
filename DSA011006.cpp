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
vector<int> lv;

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

void Connect(node &root, int a, char b){
    node tmp = new Node(a);
    tmp->level = root->level + 1;
    if(b == 'L')
        root->left = tmp;
    else
        root->right = tmp;
}

void Creat_Tree(node &root, int a, int b, char c){
    if(root == NULL)
        return;
    if(root->value == a)
        Connect(root, b, c);

    Creat_Tree(root->left, a, b, c);
    Creat_Tree(root->right, a, b, c);
}

void Spiral_Order(node root){
    queue<node> q;
    q.push(root);

    while(!q.empty()){
        node x = q.front();
        q.pop();

        if(x->level % 2){
            if(!lv.empty()){
                reverse(lv.begin(), lv.end());
                for(int k : lv)
                    cout << k << " ";       
                lv.clear();         
            }
            cout << x->value << " ";
        }else{
            lv.push_back(x->value);
        }

        if(x->left != NULL) q.push(x->left);
        if(x->right != NULL) q.push(x->right);
    }

    if(!lv.empty()){
        reverse(lv.begin(), lv.end());
        for(int k : lv)
            cout << k << " ";       
        lv.clear();         
    }

    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        node root = NULL;
        while(n--){
            cin >> u >> v >> x;
            if(root == NULL){
                root = new Node(u);
                Connect(root, v, x);
            }else
                Creat_Tree(root, u, v, x);
        }

        Spiral_Order(root);
    }
}
