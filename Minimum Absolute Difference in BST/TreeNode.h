//
// Created by MRIGANKA on 4/27/2022.
//

#ifndef MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_TREENODE_H
#define MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_TREENODE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif //MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_TREENODE_H
