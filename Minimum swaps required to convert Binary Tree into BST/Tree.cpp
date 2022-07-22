//
// Created by MRIGANKA on 3/11/2022.
//

#include <algorithm>
#include <vector>
#include "Tree.h"

int Tree::count_swap(Node *root) {
    inorder(root, tree);
    std::vector<std::pair<int, int>> vec(tree.size());

    for (int i = 0; i < tree.size(); ++i) {
        vec[i] = { tree[i], i };
    }

    std::sort(vec.begin(), vec.end());

    int swaps = 0;
    for (int i = 0; i < tree.size(); ++i) {
        if (vec[i].second == i) {
            continue;
        } else {
            swaps++;
            std::swap(vec[i], vec[vec[i].second]);
            i--;
        }
    }

    return swaps;
}

void Tree::inorder(Node *root, std::vector<int> &tree) {
    if (root != nullptr) {
        inorder(root->left, tree);
        tree.push_back(root->data);
        inorder(root->right, tree);
    }
}
