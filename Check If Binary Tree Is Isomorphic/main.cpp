#include <iostream>

#include "Node.h"
#include "Tree.h"

int main() {
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->left->right->left = new Node(7);
    root1->left->right->right = new Node(8);

    Node *root2 = new Node(1);
    root2->left = new Node(3);
    root2->right = new Node(2);
    root2->right->left = new Node(4);
    root2->right->right = new Node(5);
    root2->left->right = new Node(6);
    root2->right->right->left = new Node(8);
    root2->right->right->right = new Node(7);

    Tree tree;

    if (tree.is_isomorphic(root1, root2)) {
        std::cout << "Yes Isomorphic" << std::endl;
    } else {
        std::cout << "Not Isomorphic" << std::endl;
    }
}
