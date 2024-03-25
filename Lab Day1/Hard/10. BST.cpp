#include <iostream>

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int k) : key(k), left(NULL), right(NULL) {}
};

class BST {
private:
    Node* root;

    Node* insertUtil(Node* node, int key) {
        if (node == NULL)
            return new Node(key);

        if (key < node->key)
            node->left = insertUtil(node->left, key);
        else if (key > node->key)
            node->right = insertUtil(node->right, key);

        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != NULL)
            current = current->left;
        return current;
    }

    Node* deleteUtil(Node* root, int key) {
        if (root == NULL)
            return root;

        if (key < root->key)
            root->left = deleteUtil(root->left, key);
        else if (key > root->key)
            root->right = deleteUtil(root->right, key);
        else {
            if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = deleteUtil(root->right, temp->key);
        }
        return root;
    }

    void inOrderUtil(Node* node) {
        if (node == NULL)
            return;
        inOrderUtil(node->left);
        std::cout << node->key << " ";
        inOrderUtil(node->right);
    }

    void preOrderUtil(Node* node) {
        if (node == NULL)
            return;
        std::cout << node->key << " ";
        preOrderUtil(node->left);
        preOrderUtil(node->right);
    }

    void postOrderUtil(Node* node) {
        if (node == NULL)
            return;
        postOrderUtil(node->left);
        postOrderUtil(node->right);
        std::cout << node->key << " ";
    }

public:
    BST() : root(NULL) {}

    void insert(int key) {
        root = insertUtil(root, key);
    }

    void remove(int key) {
        root = deleteUtil(root, key);
    }

    void inOrderTraversal() {
        std::cout << "In-order traversal: ";
        inOrderUtil(root);
        std::cout << std::endl;
    }

    void preOrderTraversal() {
        std::cout << "Pre-order traversal: ";
        preOrderUtil(root);
        std::cout << std::endl;
    }

    void postOrderTraversal() {
        std::cout << "Post-order traversal: ";
        postOrderUtil(root);
        std::cout << std::endl;
    }
};

int main() {
    BST bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    bst.inOrderTraversal();
    bst.preOrderTraversal();
    bst.postOrderTraversal();

    bst.remove(20);
    std::cout << "After removing 20: ";
    bst.inOrderTraversal();

    return 0;
}
