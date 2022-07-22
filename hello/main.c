#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert(int data, struct Node **head) {
    struct Node *new_node = (struct Node *) malloc(sizeof (struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        (*head) = new_node;
        return;
    } else {
        struct Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void delete(struct Node *head) {
    if (head == NULL) {
        printf("Nothing to delete \n");
        return;
    }
    else {
        struct Node *temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
    }
}

struct Node *reverse(struct Node *head) {
    struct Node *current = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
    return head;
}

void print(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Node *head = NULL;
    insert(1, &head);
    insert(2, &head);
    insert(3, &head);
    insert(4, &head);
    insert(5, &head);

    print(head);
//    delete(head);
//    print(head);
    head = reverse(head);
    print(head);

    return 0;
}
