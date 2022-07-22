//
// Created by MRIGANKA on 3/14/2022.
//

#include <stack>
#include "LinkedList.h"

bool LinkedList::is_palindrome(Node *head) {
    std::stack<int> s;
    Node *temp = head;

    while (temp != nullptr) {
        s.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != nullptr) {
        int val = s.top();
        s.pop();
        if (val != temp->data) {
            return false;
        }
        temp = temp->next;
    }

    return true;
}
