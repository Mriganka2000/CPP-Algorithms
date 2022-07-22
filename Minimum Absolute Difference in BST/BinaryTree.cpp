//
// Created by MRIGANKA on 4/27/2022.
//

#include "BinaryTree.h"

void BinaryTree::dfs(TreeNode *root) {
    if (root == nullptr) {
        return;
    }
    if (root->left) {
        dfs(root->left);
    }
    if (prev) {
        res = std::min(res, std::abs(prev->val - root->val));
    }
    prev = root;
    if (root->right) {
        dfs(root->right);
    }
}

int BinaryTree::getMinimumDifference(TreeNode *root) {
    dfs(root);
    return res;
}