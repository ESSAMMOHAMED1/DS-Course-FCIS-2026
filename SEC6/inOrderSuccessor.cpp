struct Node {
    int val;
    Node *left = nullptr, *right = nullptr, *parent = nullptr;
    Node(int v) : val(v) {}
};


Node* getSuccessor(Node* n) {
    if (!n) return nullptr;

    // CASE 1: Go Right once, then all the way Left
    if (n->right) {
        n = n->right;
        while (n->left) n = n->left;
        return n;
    }

    // CASE 2: Climb up until you are no longer the Right child
    Node* p = n->parent;
    while (p && n == p->right) {
        n = p;
        p = p->parent;
    }
    return p;
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->parent = root;
    root->right->parent = root;

    Node* successor = getSuccessor(root->left); // Should return the node with value 20
    if (successor) {
        std::cout << "Inorder Successor of " << root->left->val << " is " << successor->val << std::endl;
    } else {
        std::cout << "No Inorder Successor found." << std::endl;
    }

    return 0;
}
