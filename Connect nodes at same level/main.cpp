#include <iostream>
#include "Node.h"
#include "Tree.h"

int main() {
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);

    Tree tree;
    tree.connect(root);

    std::cout << "Following are populated next_right pointers in the tree (-1 is printed if there is no nextRight)\n";
    std::cout << "next_right of " << root->data << " is " << (root->next_right ? root->next_right->data : -1) << std::endl;
    std::cout << "next_right of " << root->left->data << " is " << (root->left->next_right ? root->left->next_right->data : -1) << std::endl;
    std::cout << "next_right of " << root->right->data << " is " << (root->right->next_right ? root->right->next_right->data : -1) << std::endl;
    std::cout << "next_right of " << root->left->left->data << " is " << (root->left->left->next_right ? root->left->left->next_right->data : -1) << std::endl;
}
