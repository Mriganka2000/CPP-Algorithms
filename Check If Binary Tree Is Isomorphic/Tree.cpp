//
// Created by MRIGANKA on 3/10/2022.
//

#include "Tree.h"
#include "Node.h"

bool Tree::is_isomorphic(Node *root1, Node *root2) {
    if (!root1 and !root2) {
        return true;
    }
    if (!root1 or !root2) {
        return false;
    }
    if (root1->data != root2->data) {
        return false;
    }

    bool a = is_isomorphic(root1->left, root2->left) && is_isomorphic(root1->right, root2->right);
    bool b = is_isomorphic(root1->left, root2->right) && is_isomorphic(root1->right, root2->left);

    return a || b;
}