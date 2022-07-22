#include <iostream>
#include "Node.h"

class Tree {
    Node* get_kth_ancestor_util(Node *root, int val, int &k) {
        if (!root) {
            return nullptr;
        }
        Node *rv = nullptr;

        if (root->data == val or (rv =  get_kth_ancestor_util(root->left,val,k)) or (rv =  get_kth_ancestor_util(root->right,val,k))) {
            if (k > 0) {
                k--;
            } else if (k == 0) {
                std::cout << root->data << std::endl;
                return nullptr;
            }
            return rv ? rv : root;
        }

        return nullptr;
    }
public:
    void get_kth_ancestor(Node *root, int val, int k) {
        Node *parent = get_kth_ancestor_util(root, val, k);
        if (parent) {
            std::cout << "-1" << std::endl;
        }
    }
};

int main() {
//    Node *root = new Node(1);
//    root->left = new Node(2);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->left->right->left = new Node(8);
//    root->left->right->right = new Node(9);
//    root->left->left->left = new Node(7);
//    root->right = new Node(3);
//    root->right->right = new Node(6);
//    root->right->right->right = new Node(10);
//    int k = 3, val = 7;

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int k = 2;
    int val = 5;

    Tree tree;
    tree.get_kth_ancestor(root, val, k);
}
