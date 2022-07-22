#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    LinkedList list;

    std::cout << list.is_palindrome(head) << std::endl;
}
