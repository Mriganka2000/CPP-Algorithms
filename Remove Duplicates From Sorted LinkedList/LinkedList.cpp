//
// Created by MRIGANKA on 3/11/2022.
//

#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::insert(int data) {
    if (head == nullptr) {
        head = new Node(data);
    } else {
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }
}

void LinkedList::remove_duplicates() {
    Node *temp = head;
    while (temp->next) {
        if (temp->data == temp->next->data) {
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }
    }
}

void LinkedList::print() {
    Node *temp = head;
    while (temp) {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}
