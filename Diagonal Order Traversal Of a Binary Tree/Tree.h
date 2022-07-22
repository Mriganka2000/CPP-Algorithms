//
// Created by MRIGANKA on 3/14/2022.
//

#ifndef DIAGONAL_ORDER_TRAVERSAL_OF_A_BINARY_TREE_TREE_H
#define DIAGONAL_ORDER_TRAVERSAL_OF_A_BINARY_TREE_TREE_H


#include <map>
#include <vector>
#include "Node.h"

class Tree {
private:
    void helper(Node *root, int hd, std::map<int, std::vector<int>> &Map);
public:
    void diagonal_print(Node *root);
};


#endif //DIAGONAL_ORDER_TRAVERSAL_OF_A_BINARY_TREE_TREE_H
