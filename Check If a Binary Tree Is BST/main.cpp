#include <iostream>
#include "Node.h"
#include "Tree.h"

int main() {
//    Node *root = new Node(4);
//    root->left = new Node(2);
//    root->right = new Node(5);
//    root->left->left = new Node(1);
//    root->left->right = new Node(3);

    Node *root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(4);

    Tree tree;

    if(tree.is_bst(root))
        std::cout<<"Is BST";
    else
        std::cout<<"Not a BST";
}
