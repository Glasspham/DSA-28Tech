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

node* findMax(node* root) {
    if(!root) return NULL;
    while(root->right)
        root = root->right;
    return root;
}

node* findMin(node* root) {
    if(!root) return NULL;
    while(root->left)
        root = root->left;
    return root;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    #if 0 // Gian lận
    int val_max = INT_MIN, val_min = INT_MAX;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        if(num > val_max) val_max = num;
        if(num < val_min) val_min = num;
    }
    cout << val_max << ' ' << val_min;
    #endif
    #if 1
    node* root = NULL;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        root = insert(root, num);
    }
    node* val_max = findMax(root);
    node* val_min = findMin(root);
    cout << val_max->data << ' ' << val_min->data;
    #endif
    return 0;
}