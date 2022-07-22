//
// Created by MRIGANKA on 3/8/2022.
//

#include "Tree.h"
#include "Node.h"

Node * Tree::lca(Node *root, int a, int b) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->data == a || root->data == b) {
        return root;
    }
    Node *lca_left = lca(root->left, a, b);
    Node *lca_right = lca(root->right, a, b);
    if (lca_left != nullptr && lca_right != nullptr) {
        return root;
    }
    return (lca_left != nullptr) ? lca_left : lca_right;
}

int Tree::find_dist_from_root(Node *root, int val) {
    if (!root) {
        return 0;
    }
    if (root->data == val) {
        return 1;
    }
    int a = find_dist_from_root(root->left, val);
    int b = find_dist_from_root(root->right, val);
    if (!a and !b) {
        return 0;
    } else {
        return a+b+1;
    }
}

int Tree::find_dist_btw_nodes(Node *root, int a, int b) {
    Node *lca_node = lca(root, a, b);
    int x = find_dist_from_root(lca_node, a);
    int y = find_dist_from_root(lca_node, b);
    return (x + y - 2);
}
