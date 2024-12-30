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

set<int> st;
void preOrder(node* root, int cnt) {
    if(root == NULL) return;
    if(root->left == NULL and root->right == NULL)
        st.insert(cnt);
    preOrder(root->left, cnt + 1);
    preOrder(root->right, cnt + 1);
}

bool check(node* root, int h, int &maxh) {
    if(root == NULL) return true;
    if(root->left == NULL and root->right == NULL) {
        if(maxh == 0) {
            maxh = h;
            return true;
        } else h = maxh;
    } else return check(root->left, h + 1, maxh) &&
                  check(root->right, h + 1, maxh);
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
    #if 1
    preOrder(root, 0);
    if(st.size() == 1) cout << "YES\n";
    else cout << "NO\n";
    #endif
    #if 1 // Leetcode
    int maxh = 0;
    if(check(root, 0, maxh)) cout << "YES\n";
    else cout << "NO\n";
    #endif
    return 0;
}