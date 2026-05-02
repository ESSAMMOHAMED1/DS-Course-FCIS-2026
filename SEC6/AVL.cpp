#include <iostream>
#include <algorithm>

using namespace std;

// 1. The Node Structure
struct Node {
    int key;
    Node *left, *right;
    int height;

    Node(int k) {
        key = k;
        left = right = nullptr;
        height = 0; // New nodes are leaves
    }
};

// 2. Helper: Get Height
int getHeight(Node* n) {
    return (n == nullptr) ? -1 : n->height;
}

// 3. Helper: Get Balance Factor (Left - Right)
int getBalanceFactor(Node* n) {
    if (n == nullptr) return 0;
    return getHeight(n->left) - getHeight(n->right);
}

// 4. RIGHT ROTATION (Fixes LL Case)
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x; // New root
}

// 5. LEFT ROTATION (Fixes RR Case)
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y; // New root
}

// 6. INSERTION (The "Smart" Insert)
Node* insert(Node* node, int key) {
    // Standard BST Insert
    if (node == nullptr) return new Node(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node; // Duplicate keys not allowed

    // Update height of this ancestor node
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // Check Balance Factor
    int balance = getBalanceFactor(node);

    // LL Case -> Right Rotate
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // RR Case -> Left Rotate
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // LR Case -> Left then Right
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // RL Case -> Right then Left
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// 7. Helper: Print (Pre-order)
void preOrder(Node* root) {
    if (root != nullptr) {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Testing insertion
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30); // Triggers RR (Left Rotate)
    root = insert(root, 40);
    root = insert(root, 50); // Triggers RR (Left Rotate)
    root = insert(root, 25); // Triggers RL (Right-Left Rotate)

    cout << "Preorder traversal of balanced AVL tree: " << endl;
    preOrder(root);

    return 0;
}
