#include <stdio.h>
#include <malloc.h>
#include <windows.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * insert(int data, struct Node *root) {
    if (root == NULL) {
        struct Node *new_node = (struct Node*)malloc(sizeof (struct Node));
        new_node->data = data;
        new_node->left = new_node->right = NULL;
        return new_node;
    } else if (root->data <= data) {
        root->right = insert(data, root->right);
    } else if (root->data > data) {
        root->left = insert(data, root->left);
    }
    return root;
}

void print(struct Node *root) {
    if (root != NULL) {
        print(root->left);
        printf("%d\n", root->data);
        print(root->right);
    }
}

int main() {
    struct Node *root = NULL;
    root = insert(4, root);
    insert(2, root);
    insert(1, root);
    insert(3, root);
    insert(6, root);
    insert(5, root);
    insert(7, root);

    print(root);

    return 0;
}
