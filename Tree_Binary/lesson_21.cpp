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

node* insert(node* root, int x) {
    if(!root) return new node(x);
    if(root->data < x) root->right = insert(root->right, x);
    else if(root->data > x) root->left = insert(root->left, x);
    return root;
}

node* minNode(node* root) {
    while(root and root->left)
        root = root->left;
    return root;
}

node* deleteNode(node* root, int x) {
    if(!root) return root;
    if(x < root->data) root->left = deleteNode(root->left, x);
    else if(x > root->data) root->right = deleteNode(root->right, x);
    else {
        if(root->left == NULL) {
            node* tmp = root->right;
            delete root;
            return tmp;
        } else if(root->right == NULL) {
            node* tmp = root->left;
            delete root;
            return tmp;
        } else {
            node* tmp = minNode(root->right);
            root->data = tmp->data;
            root->right = deleteNode(root->right, tmp->data);
        }
    } return root;
}

void inOrder(node* root) {
    if(!root) return;
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
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
        int num; cin >> num;
        root = insert(root, num);
    }
    int x; cin >> x;
    root = deleteNode(root, x);
    inOrder(root);
    return 0;
}