//
// Created by MRIGANKA on 3/14/2022.
//

#include "Tree.h"
#include <iostream>

void Tree::helper(Node *root, int hd, std::map<int, std::vector<int>> &Map) {
    if (root == nullptr) {
        return;
    }

    Map[hd].push_back(root->data);

    helper(root->left, hd + 1, Map);
    helper(root->right, hd, Map);
}

void Tree::diagonal_print(Node *root) {
    std::map<int, std::vector<int>> Map;
    helper(root, 0, Map);

    for (auto it : Map) {
        std::vector<int> v = it.second;
        for (auto item : v) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
}
