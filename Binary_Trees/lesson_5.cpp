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

int treeHeight(node* root) {
    if(root == NULL) return 0;
    queue<pair<node*,int>> q;
    q.push({root, 1});
    int height = 1;
    while(!q.empty()) {
        auto[top, h] = q.front(); q.pop();
        if(top->left != NULL) {
            q.push({top->left, h + 1});
            height = h + 1;
        }
        if(top->right != NULL) {
            q.push({top->right, h + 1});
            height = h + 1;
        }  
    } return height;
}

int height(node* root) {
    if(root == NULL) return -1;
    return max(height(root->left) + 1, height(root->right) + 1);
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
    cout << treeHeight(root) << endl;
    cout << height(root);
    return 0;
}