//
// Created by MRIGANKA on 4/29/2022.
//

#ifndef SUM_OF_LEFT_LEAVES_TREENODE_H
#define SUM_OF_LEFT_LEAVES_TREENODE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif //SUM_OF_LEFT_LEAVES_TREENODE_H
