#include <iostream>
#include "BinaryTree.h"

int main() {
    BinaryTree tree;

    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right = new TreeNode(6);

    std::cout << tree.getMinimumDifference(root);
}
