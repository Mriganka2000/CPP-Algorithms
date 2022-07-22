#include <iostream>
#include "Node.h"
#include "Tree.h"

int main() {
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);

    Tree tree;
    std::cout << "Dist(4, 5) = " << tree.find_dist_btw_nodes(root, 4, 5);
    std::cout << "\nDist(4, 6) = " << tree.find_dist_btw_nodes(root, 4, 6);
    std::cout << "\nDist(3, 4) = " << tree.find_dist_btw_nodes(root, 3, 4);
    std::cout << "\nDist(2, 4) = " << tree.find_dist_btw_nodes(root, 2, 4);
    std::cout << "\nDist(8, 5) = " << tree.find_dist_btw_nodes(root, 8, 5);
}
