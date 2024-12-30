#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
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

int countLeaf(node* root) {
    if(root == NULL) return 0;
    if(root->left == NULL and root->right == NULL) return 1;
    return countLeaf(root->left) + countLeaf(root->right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    node* root = NULL;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL) root = new node(u);
        insertNode(root, u, v, c);
    }
    cout << countLeaf(root);
    return 0;
}