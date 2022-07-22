//
// Created by MRIGANKA on 3/13/2022.
//

#ifndef CHECK_IF_A_BINARY_TREE_IS_BST_TREE_H
#define CHECK_IF_A_BINARY_TREE_IS_BST_TREE_H

#include "Node.h"

class Tree {
private:
    bool is_bst_impl(Node *root, int min, int max);
public:
    bool is_bst(Node *root);
};


#endif //CHECK_IF_A_BINARY_TREE_IS_BST_TREE_H
