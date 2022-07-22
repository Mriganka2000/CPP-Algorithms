//
// Created by MRIGANKA on 3/8/2022.
//

#ifndef FIND_DISTANCE_BETWEEN_2_NODES_IN_A_BINARY_TREE_TREE_H
#define FIND_DISTANCE_BETWEEN_2_NODES_IN_A_BINARY_TREE_TREE_H

#include "Node.h"

class Tree {
    Node * lca(Node *root, int a, int b);
    int find_dist_from_root(Node *root, int val);
public:
    int find_dist_btw_nodes(Node *root, int a, int b);
};


#endif //FIND_DISTANCE_BETWEEN_2_NODES_IN_A_BINARY_TREE_TREE_H
