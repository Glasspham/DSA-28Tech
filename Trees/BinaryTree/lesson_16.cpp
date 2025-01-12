#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* right;
    node* left;
    node(int x) {
        data = x;
        left = right = NULL;
    }
};

node* insert(node* root, int x) {
    if(root == NULL) return new node(x);
    if(x < root->data) root->left = insert(root->left, x);
    else if(x > root->data) root->right = insert(root->right, x);
    return root;
}

void inOrder(node* root) {
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    #if 1 // Gian lận
    node* root = NULL;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        root = insert(root, num);
    }
    inOrder(root);
    #endif
    #if 1
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int x : a) cout << x << ' ';
    #endif
    return 0;
}