#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node {
    int data;
    node* left;
    node* right;
    node(int x) {
        data = x;
        left = right = NULL;
    } 
};

void makeRoot(node* root, int v, char c) {
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node* root, int u, int v, char c) {
    if(root == NULL) return;
    if(root->data == u) makeRoot(root, v, c);
    else {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void Input(node* &root) {
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int x, y; char c;
        cin >> x >> y >> c;
        if(root == NULL) root = new node(x);
        insertNode(root, x, y, c);
    }
}

bool check(node* root1, node* root2) {
    if(root1 == NULL and root2 == NULL) return true;
    if(root1 == NULL or root2 == NULL) return false;
    if(root1->data != root2->data) return false;
    return check(root1->left, root2->left) && check(root1->right, root2->right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    node* root1 = NULL; Input(root1);
    node* root2 = NULL; Input(root2);
    if(check(root1, root2)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}