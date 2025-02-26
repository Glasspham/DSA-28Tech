#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* right;
    node* left;
};

node* makeNode(int x) {
    node* newNode = new node;
    newNode->data = x;
    newNode->right = newNode->left = NULL;
    return newNode;
}

bool search(node* root, int x) {
    if(root == NULL) return false;
    if(root->data == x) return true;
    else if(root->data < x) return search(root->right, x);
    else return search(root->left, x);
}

node* insert(node* root, int x) {
    if(root == NULL) return makeNode(x);
    if(x < root->data) root->left = insert(root->left, x);
    else if(x > root->data) root->right = insert(root->right, x);
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

int sumNode(node* root) {
    if(!root) return 0;
    return root->data + sumNode(root->left) + sumNode(root->right);
}

int countNode(node* root) {
    if(!root) return 0;
    return 1 + countNode(root->left) + countNode(root->right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    node *root = makeNode(10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);
    insert(root, 12);
    insert(root, 18);
    insert(root, 20);
    cout << sumNode(root) << endl;
    cout << countNode(root) << endl;
    return 0;
}