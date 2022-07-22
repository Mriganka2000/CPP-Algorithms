#include <iostream>
#include "TreeNode.h"
#include "BinaryTree.h"

int main() {
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    BinaryTree tree;
//    tree.inorder(root);
    std::cout << tree.sumOfLeftLeaves(root);
}
