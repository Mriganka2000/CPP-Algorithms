#include <iostream>

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree {
public:
    Node *root = NULL;
    void insert(int data) {
        if (root == NULL) {
            root = new Node(data);
        } else {
            Node *newNode = new Node(data);
            search(root, newNode);
        }
    }

    void inorder() {
        inorder(root);
    }

    int height() {
        return height(root);
    }

    void mirror() {
        Node *temp = mirror(root);
        inorder(temp);
    }

private:
    void inorder(Node *root) {
        if (root != NULL) {
            inorder(root->left);
            std::cout << root->data << std::endl;
            inorder(root->right);
        } else {
            return;
        }
    }

    void search(Node *root, Node *newNode) {
        if (root->data > newNode->data && root->left != NULL) {
            search(root->left, newNode);
        }
        if (root->data > newNode->data && root->left == NULL) {
            root->left = newNode;
        }
        if (root->data < newNode->data && root->right != NULL) {
            search(root->right, newNode);
        }
        if (root->data < newNode->data && root->right == NULL) {
            root->right = newNode;
        }
    }

    int height(Node *root) {
        if (root == NULL) {
            return 0;
        } else {
            int left = height(root->left);
            int right = height(root->right);
            if (left > right) {
                return left + 1;
            } else {
                return right + 1;
            }
        }
    }

    Node * mirror(Node *root) {
        if (root == NULL) {
            return root;
        } else {
            Node *left = mirror(root->left);
            Node *right = mirror(root->right);

            root->left = right;
            root->right = left;

            return root;
        }
    }
};

int main()
{
    Tree *tree = new Tree();
    tree->insert(2);
    tree->insert(1);
    tree->insert(3);
    tree->inorder();
    std::cout << tree->height() << std::endl;
    std::cout << std::endl;
    tree->mirror();
}
