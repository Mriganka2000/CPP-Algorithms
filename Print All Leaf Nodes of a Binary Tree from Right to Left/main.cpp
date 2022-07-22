#include "Node.h"
#include "Tree.h"

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->right->right->left = new Node(9);
    root->left->left->left->right = new Node(10);

    Tree tree;
    tree.print_leaf_nodes(root);
}
