#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int v, char c)
{
    if (c == 'L')
        root->left = new node(v);
    else
        root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c)
{
    if (root == NULL)
        return;
    if (u == root->data)
        makeRoot(root, v, c);
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void spiralOrder(node *root)
{
    stack<node *> a, b;
    a.push(root);
    while (!a.empty() or !b.empty())
    {
        while (!a.empty())
        {
            auto top = a.top();
            a.pop();
            cout << top->data << ' ';
            if (top->right != NULL)
                b.push(top->right);
            if (top->left != NULL)
                b.push(top->left);
        }
        while (!b.empty())
        {
            auto top = b.top();
            b.pop();
            cout << top->data << ' ';
            if (top->left != NULL)
                a.push(top->left);
            if (top->right != NULL)
                a.push(top->right);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
#endif
    node *root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (root == NULL)
            root = new node(u);
        insertNode(root, u, v, c);
    }
    spiralOrder(root);
    return 0;
}