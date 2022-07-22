//
// Created by MRIGANKA on 3/13/2022.
//

#include <iostream>
#include "Tree.h"
#include "Node.h"


bool Tree::is_bst_impl(Node *root, int min, int max) {
    if (root == nullptr) {
        return true;
    }

    if (root->data < min || root->data > max) {
        return false;
    }

    return is_bst_impl(root->left, min, root->data - 1) && is_bst_impl(root->right, root->data + 1, max);
}

bool Tree::is_bst(Node *root) {
    return is_bst_impl(root, INT_MIN, INT_MAX);
}
