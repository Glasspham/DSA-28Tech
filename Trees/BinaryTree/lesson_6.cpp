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

bool Check(node* root) {
    if(root == NULL) return true;
    if(root->left == NULL and root->right == NULL)
        return true;
    if(root->right != NULL and root->right != NULL)
        return Check(root->left) && Check(root->right);
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    node* root = NULL;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL) root = new node(u);
        insertNode(root, u, v, c);
    }
    if(Check(root)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}