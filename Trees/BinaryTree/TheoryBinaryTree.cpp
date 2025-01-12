#include<bits/stdc++.h>
using namespace std;
#define ll long long

#if 0 // Tạo cây cơ bản dùng constructor
typedef struct node {
    int data;
    node* left;
    node* right;
    node(int x) {
        data = x;
        left = right = nullptr;
    }
} node;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    node *root = new node(10);
    cout << root->data << endl;
    cout << root->left << ' ' << root->right;
    return 0;
}
#endif

#if 0 // Tạo cây cơ bản dùng function và duyệt cây
typedef struct node {
    int data;
    node* left;
    node* right;
} node;

node* makeNode(int x) {
    node* newNode = new node;
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int main() {
    #if 0 // Tạo cây
    node* root = makeNode(1);
    node* node2 = makeNode(2);
    node* node3 = makeNode(3);
    node* node4 = makeNode(4);
    node* node5 = makeNode(5);
    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;
    // Cách viết khác
    /*
    root->left->left = node4;
    root->left->right = node5;
    */
    cout << root->data << endl;
    cout << root->left->data << ' ' << root->right->data << endl;
    cout << root->left->left->data << ' ' << root->left->right->data << endl;
    #endif

    #if 1 // Duyệt cây
    node* root = makeNode(1);
    root->left = makeNode(2);
    root->right = makeNode(3);
    root->left->left = makeNode(4); 
    root->left->right = makeNode(5);
    root->right->left = makeNode(6);
    root->right->right = makeNode(7);
    root->right->right->left = makeNode(8);
    while(root != NULL) {
        cout << root->data << endl;
        root = root->right;
    }
    cout << root->data;
    #endif
}
#endif

#if 1 // Duyệt cây theo nhiều kiểu
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

void printTree(node* root, int space = 0, int level_space = 4) {
    if (root == nullptr) return;
    space += level_space;
    printTree(root->right, space);
    cout << endl;
    for (int i = level_space; i < space; ++i)
        cout << " ";
    cout << root->data << endl;
    printTree(root->left, space);
}

void inOrder(node* root) {
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}

void preOrder(node* root) {
    if(root == NULL) return;
    cout << root->data << ' ';
    preOrder(root->left); 
    preOrder(root->right); 
}

void postOrder(node* root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << ' ';
}

void levelOrder(node* root) {
    queue<node*> q;
    q.push(root);
    while(!q.empty()) {
        node* top = q.front(); q.pop();
        cout << top->data << ' ';
        if(top->left != NULL)
            q.push(top->left);
        if(top->right != NULL)
            q.push(top->right);
    }
}

void spiralOrder(node* root) {
    stack<node*> st1, st2;
    st1.push(root);
    while(!st1.empty() or !st2.empty()) {
        while(!st1.empty()) {
            node* top = st1.top(); st1.pop();
            cout << top->data << ' ';
            if(top->right != NULL)
                st2.push(top->right);
            if(top->left != NULL)
                st2.push(top->left);
        }
        while(!st2.empty()) {
            node* top = st2.top(); st2.pop();
            cout << top->data << ' ';
            if(top->left != NULL)
                st1.push(top->left);
            if(top->right != NULL)
                st1.push(top->right);
        }
    }
}

int main() {
    node* root = makeNode(1);
    root->left = makeNode(2);
    root->right = makeNode(3);
    root->left->left = makeNode(4); 
    root->left->right = makeNode(5);
    root->right->left = makeNode(6);
    root->right->right = makeNode(7);
    root->left->left->left = makeNode(8);
    root->left->left->right = makeNode(9);
    root->left->right->left = makeNode(10);
    root->left->right->right = makeNode(11);
    root->right->left->left = makeNode(12);
    root->right->left->right = makeNode(13);
    root->right->right->left = makeNode(14);
    root->right->right->right = makeNode(15);
    cout << "Tree\n";
    printTree(root);
    cout << endl;
    cout << "Inoder (left - root - right): ";
    inOrder(root);
    cout << endl;
    cout << "Preoder (root - left - right): ";
    preOrder(root);
    cout << endl;
    cout << "Postoder (left - right - root): ";
    postOrder(root);
    cout << endl;
    cout << "Level: ";
    levelOrder(root);
    cout << endl;
    cout << "Spiral: ";
    spiralOrder(root);
    cout << endl;
}
#endif