#include <iostream>
#include <queue>

// Basic Node structure
struct Node {
    int val;
    Node *left, *right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

// --- DFS: PRE-ORDER (Root, Left, Right) ---
void preOrder(Node* root) {
    if (!root) return;
    std::cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// --- DFS: IN-ORDER (Left, Root, Right) ---
void inOrder(Node* root) {
    if (!root) return;
    inOrder(root->left);
    std::cout << root->val << " ";
    inOrder(root->right);
}

// --- DFS: POST-ORDER (Left, Right, Root) ---
void postOrder(Node* root) {
    if (!root) return;
    postOrder(root->left);
    postOrder(root->right);
    std::cout << root->val << " ";
}

// --- BFS: LEVEL-ORDER (Uses a Queue) ---
void bfs(Node* root) {
    if (!root) return;

    std::queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        std::cout << curr->val << " ";

        if (curr->left)  q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

int main() {
    /*
       Creating a sample tree:
              1
             / \
            2   3
           / \
          4   5
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    std::cout << "BFS (Level-Order): ";
    bfs(root);
    std::cout << "\n\n";

    std::cout << "DFS (Pre-Order):   ";
    preOrder(root);
    std::cout << "\n";

    std::cout << "DFS (In-Order):    ";
    inOrder(root);
    std::cout << "\n";

    std::cout << "DFS (Post-Order):  ";
    postOrder(root);
    std::cout << std::endl;

    return 0;
}
