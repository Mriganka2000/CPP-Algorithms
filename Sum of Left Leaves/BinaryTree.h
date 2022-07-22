//
// Created by MRIGANKA on 4/29/2022.
//

#ifndef SUM_OF_LEFT_LEAVES_BINARYTREE_H
#define SUM_OF_LEFT_LEAVES_BINARYTREE_H

#include "TreeNode.h"

class BinaryTree {
private:
    int sum = 0;
    void preorder(TreeNode *root);
public:
    int sumOfLeftLeaves(TreeNode* root);
    void inorder(TreeNode *root);
};


#endif //SUM_OF_LEFT_LEAVES_BINARYTREE_H
