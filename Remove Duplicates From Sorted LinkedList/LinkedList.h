//
// Created by MRIGANKA on 3/11/2022.
//

#ifndef REMOVE_DUPLICATES_FROM_SORTED_LINKEDLIST_LINKEDLIST_H
#define REMOVE_DUPLICATES_FROM_SORTED_LINKEDLIST_LINKEDLIST_H

#include "Node.h"

class LinkedList {
    Node *head;
public:
    LinkedList();
    void insert(int data);
    void remove_duplicates();
    void print();
};


#endif //REMOVE_DUPLICATES_FROM_SORTED_LINKEDLIST_LINKEDLIST_H
