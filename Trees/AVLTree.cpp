#include <iostream>
using namespace std;

// Node của cây AVL
template <typename T>
struct Node {
    T data;
    Node<T>* left;
    Node<T>* right;
    int height;
    Node(T value) : data(value), left(nullptr), right(nullptr), height(1) {}
};

// Cây AVL dạng template
template <typename T>
class AVLTree {
private:
    Node<T>* root;

    int getHeight(Node<T>* node) { return node ? node->height : 0; }

    int getBalanceFactor(Node<T>* node) {
        return node ? getHeight(node->left) - getHeight(node->right) : 0;
    }

    Node<T>* rotateRight(Node<T>* y) {
        Node<T>* x = y->left;
        Node<T>* T2 = x->right;
        x->right = y;
        y->left = T2;
        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
        return x;
    }

    Node<T>* rotateLeft(Node<T>* x) {
        Node<T>* y = x->right;
        Node<T>* T2 = y->left;
        y->left = x;
        x->right = T2;
        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
        return y;
    }

    Node<T>* balance(Node<T>* node) {
        int balance = getBalanceFactor(node);
        if (balance > 1 && getBalanceFactor(node->left) >= 0)
            return rotateRight(node);
        if (balance > 1 && getBalanceFactor(node->left) < 0) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        if (balance < -1 && getBalanceFactor(node->right) <= 0)
            return rotateLeft(node);
        if (balance < -1 && getBalanceFactor(node->right) > 0) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        return node;
    }

    Node<T>* insert(Node<T>* node, T value) {
        if (!node) return new Node<T>(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);
        else return node;
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
        return balance(node);
    }

    Node<T>* getMinValueNode(Node<T>* node) {
        Node<T>* current = node;
        while (current->left) current = current->left;
        return current;
    }

    Node<T>* getMaxValueNode(Node<T>* node) {
        Node<T>* current = node;
        while (current->right) current = current->right;
        return current;
    }

    Node<T>* remove(Node<T>* node, T value) {
        if (!node) return node;
        if (value < node->data)
            node->left = remove(node->left, value);
        else if (value > node->data)
            node->right = remove(node->right, value);
        else {
            if (!node->left || !node->right) {
                Node<T>* temp = node->left ? node->left : node->right;
                delete node;
                return temp;
            }
            Node<T>* temp = getMinValueNode(node->right);
            node->data = temp->data;
            node->right = remove(node->right, temp->data);
        }
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
        return balance(node);
    }

    void inOrder(Node<T>* node) {
        if (node) {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

public:
    AVLTree() : root(nullptr) {}

    void insert(T value) { root = insert(root, value); }

    void remove(T value) { root = remove(root, value); }

    T getMinValue() {
        Node<T>* minNode = getMinValueNode(root);
        return minNode ? minNode->data : T();
    }

    T getMaxValue() {
        Node<T>* maxNode = getMaxValueNode(root);
        return maxNode ? maxNode->data : T();
    }

    void inOrderTraversal() { inOrder(root); }
};

int main() {
    AVLTree<int> tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(25);
    tree.inOrderTraversal();
    return 0;
}