#include <stdio.h>
#include "malloc.h"

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *insert(int data, struct Node *head) {
    struct Node *new_node = (struct Node *) malloc(sizeof (struct Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return head;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        new_node->prev = temp;
        temp->next = new_node;
        return head;
    }
}

struct Node *reverse(struct Node *head) {
    struct Node *current = head;
    struct Node *temp = NULL;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        head = temp->prev;
    }
    return head;
}

void print(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Node *head = NULL;
    head = insert(1, head);
    insert(2, head);
    insert(3, head);
    insert(4, head);
    insert(5, head);

//    print(head);
    head = reverse(head);
    print(head);
    return 0;
}
