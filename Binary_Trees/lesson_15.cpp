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

int height(node* root) {
    if(root == NULL) return -1;
    return max(height(root->left) + 1, height(root->right) + 1);
}

int BFS(node* root, int maxh) {
    int cnt = 0;
    queue<pair<node*,int>> qp;
    qp.push({root, 0});
    while(!qp.empty()) {
        auto[root, h] = qp.front(); qp.pop();
        if(h == maxh) ++cnt;
        if(root->left != NULL) qp.push({root->left, h + 1});
        if(root->right != NULL) qp.push({root->right, h + 1});
    } return cnt;
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
        int x, y; char c;
        cin >> x >> y >> c;
        if(root == NULL) root = new node(x);
        insertNode(root, x, y, c);
    }
    int h = height(root);
    cout << BFS(root, h);
    return 0;
}