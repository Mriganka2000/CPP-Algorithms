//
// Created by MRIGANKA on 3/20/2022.
//

#include "Tree.h"

void Tree::print_leaf(Node *root) {
    if (root == nullptr) {
        return;
    }

    if (!root->left && !root->right){
        std::cout << root->data << " ";
    }

    print_leaf(root->left);
    print_leaf(root->right);
}