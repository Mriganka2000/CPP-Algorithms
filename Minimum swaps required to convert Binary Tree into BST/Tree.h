//
// Created by MRIGANKA on 3/11/2022.
//

#ifndef MINIMUM_SWAPS_REQUIRED_TO_CONVERT_BINARY_TREE_INTO_BST_TREE_H
#define MINIMUM_SWAPS_REQUIRED_TO_CONVERT_BINARY_TREE_INTO_BST_TREE_H

#include <vector>
#include "Node.h"

class Tree {
    std::vector<int> tree;
    void inorder(Node *root, std::vector<int> &tree);
public:
    int count_swap(Node *root);
};


#endif //MINIMUM_SWAPS_REQUIRED_TO_CONVERT_BINARY_TREE_INTO_BST_TREE_H
