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
    if(root == NULL) return new node(x);
    if(root->data < x) root->right = insert(root->right, x);
    else if(root->data > x) root->left = insert(root->left, x);
    return root;
}

void postOrder(node* root) {
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right); 
    cout << root->data << ' ';
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
    postOrder(root);
    return 0;
}