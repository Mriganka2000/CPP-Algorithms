//
// Created by MRIGANKA on 3/13/2022.
//

#include "Tree.h"
#include <queue>

void Tree::connect(Node *root) {
    if (root == nullptr) {
        return;
    }

    std::queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        Node *prev = nullptr;
        while (size--) {
            Node *temp = q.front();
            q.pop();

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }

            if (prev != nullptr) {
                prev->next_right = temp;
            }
            prev = temp;
        }

        prev->next_right = nullptr;
    }
}
