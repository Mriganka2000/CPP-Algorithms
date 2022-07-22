#include <iostream>

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

class Tree {
    int largest_subtree_sum_util(Node *root, int &ans) {
        if (root == nullptr) {
            return 0;
        }
        int left = largest_subtree_sum_util(root->left, ans);
        int right = largest_subtree_sum_util(root->right, ans);
        int current = root->data + left + right;
        ans = std::max(ans, current);
        return current;
    }
public:
    int largest_subtree_sum(Node *root) {
        if (root == nullptr) {
            return 0;
        }
        int ans = INT_MIN;
        largest_subtree_sum_util(root, ans);
        return ans;
    }
};

int main() {
    Node *root = new Node(1);
    root->left = new Node(-2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(-6);
    root->right->right = new Node(2);

    Tree tree;
    std::cout << tree.largest_subtree_sum(root);
}
