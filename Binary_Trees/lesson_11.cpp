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

int preOrder[105], inOrder[105], n;
int Find(int a[], int x) {
    for(int i = 0; i < n; ++i)
        if(x == a[i]) return i;
    return 0;
}

void buildTree(node* root, int in_left, int in_right) {
    int in_pos = Find(inOrder, root->data);
    int pre_pos = Find(preOrder, root->data);
    if(in_pos > in_left) {
        root->left = new node(preOrder[pre_pos + 1]);
        buildTree(root->left, in_left, in_pos - 1);
    }
    if(in_pos < in_right) {
        int soLuongTapTrai = in_pos - in_left;
        root->right = new node(preOrder[pre_pos + soLuongTapTrai + 1]);
        buildTree(root->right, in_pos + 1, in_right);
    }
}

void postOrder(node* root) {
    if(root == NULL) return;
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
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> preOrder[i];
    for(int i = 0; i < n; ++i) cin >> inOrder[i];
    node* root = new node(preOrder[0]);
    buildTree(root, 0, n - 1);
    postOrder(root);
    return 0;
}