//
// Created by MRIGANKA on 3/13/2022.
//

#ifndef CONNECT_NODES_AT_SAME_LEVEL_NODE_H
#define CONNECT_NODES_AT_SAME_LEVEL_NODE_H


class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node *next_right;

    Node(int data);
};


#endif //CONNECT_NODES_AT_SAME_LEVEL_NODE_H
