#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
* Cây hoàn hảo là: hi = 2^i
* ví dụ:        số lượng
*    1          1 = 2^0
*  2   3        2 = 2^1 
* 4 5 6 7       4 = 2^2
* ...           ...
*/

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

// TODO: Các nốt lá cùng bậc.
set<int> st;
void Check1(node* root, int cnt) {
    if(root == NULL) return;
    if(root->left == NULL and root->right == NULL)
        st.insert(cnt);
    Check1(root->left, cnt + 1);
    Check1(root->right, cnt + 1);
}

// TODO: Các nốt trung gian đủ 2 con.
bool Check2(node* root) {
    if(root == NULL) return true;
    if(root->left == NULL and root->right == NULL)
        return true;
    if(root->left != NULL and root->right != NULL)
        return Check2(root->left) and Check2(root->right);
    else return false;
}

// TODO: Làm theo quy luật trong cây đầy đủ
bool Check3(node* root) {
    queue<node*> q;
    q.push(root);
    int cnt = 0;
    while(!q.empty()) {
        int s = q.size();
        if(s != pow(2, cnt)) return false;
        for(int i = 0; i < s; ++i) {
            node* top = q.front(); q.pop();
            if(top->left != NULL)
                q.push(top->left);
            if(top->right != NULL)
                q.push(top->right);
        } ++cnt;
    } return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    node* root = NULL;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL) root = new node(u);
        insertNode(root, u, v, c);
    }
    #if 1 // !Kết hợp 2 kiểm tra 
    Check1(root, 1);
    if(st.size() == 1 and Check2(root)) cout << "YES\n";
    else cout << "NO\n";
    #endif
    #if 1 // !Quy luật trong cây đầy đủ
    if(Check3(root)) cout << "YES\n";
    else cout << "NO\n";
    #endif
    return 0;
}