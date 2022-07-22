//
// Created by MRIGANKA on 4/29/2022.
//

#include <iostream>
#include "BinaryTree.h"

int BinaryTree::sumOfLeftLeaves(TreeNode *root) {
    if(!root->left and !root->right) {
        return 0;
    }
    preorder(root);
    return sum;
}

void BinaryTree::preorder(TreeNode *root) {
    if (root == nullptr) {
        return;
    }
    if (root->left && !root->left->left && !root->left->right) {
        sum += root->left->val;
    }
    preorder(root->left);
    preorder(root->right);
}

void BinaryTree::inorder(TreeNode *root) {
    if (root != nullptr) {
        inorder(root->left);
        std::cout << root->val << std::endl;
        inorder(root->right);
    }
}
