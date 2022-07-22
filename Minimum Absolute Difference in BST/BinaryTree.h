//
// Created by MRIGANKA on 4/27/2022.
//

#ifndef MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_BINARYTREE_H
#define MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_BINARYTREE_H

#include <climits>
#include <iostream>
#include "TreeNode.h"

class BinaryTree {
private:
    TreeNode *prev = nullptr;
    int res = INT_MAX;
    void dfs(TreeNode *root);
public:
    int getMinimumDifference(TreeNode* root);
};


#endif //MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_BINARYTREE_H
