//
// Created by MRIGANKA on 3/20/2022.
//

#include "Tree.h"

void Tree::print_leaf_nodes(Node *root) {
    if (!root) {
        return;
    }

    if (!root->left && !root->right) {
        std::cout << root->data << " ";
    }

    print_leaf_nodes(root->right);
    print_leaf_nodes(root->left);
}
