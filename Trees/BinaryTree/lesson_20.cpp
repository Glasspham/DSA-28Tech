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

bool search(node* root, int x) {
    if(!root) return false;
    if(root->data == x) return true;
    if(root->data < x) return search(root->right, x);
    else return search(root->left, x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    node* root = NULL;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        root = insert(root, num);
    }
    int x; cin >> x;
    if(search(root, x)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}