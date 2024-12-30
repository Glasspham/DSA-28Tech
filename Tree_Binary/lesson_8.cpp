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

void levelOrder(node* root) {
    queue<node*> q;
    q.push(root);
    while(!q.empty()) {
        node* top = q.front(); q.pop();
        cout << top->data << ' ';
        if(top->left != NULL) q.push(top->left);
        if(top->right != NULL) q.push(top->right);
    }
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
    levelOrder(root);
    return 0;
}