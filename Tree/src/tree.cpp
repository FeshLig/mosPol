#include "tree.h"

Tree::Tree(int data) {
    root = new Node(data);
}

Tree::~Tree() {
    destroy(root);
}

void Tree::add(int data) {
    Node **trouble = &root;
    Node *parent;
    while (*trouble) {
        Node &node = **trouble;
        if (data < node.data) {
            parent = *trouble;
            trouble = &node.left;
        } else if (data > node.data) {
            parent = *trouble;
            trouble = &node.right;
        } else {
            return;
        }
    }
    *trouble = new Node(data);
    (*trouble)->parent = parent;
}

Node* Tree::find(int data) {
    Node *node = root;
    return find(data, node);
}

Node* Tree::find(int data, Node *node) {
    if (node->data == data) {
        return node;
    } else if (node->data > data) {
        return find(data, node->left);
    } else if (node->data <= data) {
        return find(data, node->right);
    }
    return nullptr;
}

void Tree::print() {
    print(root);
    std::cout << std::endl;
}

void Tree::print(Node *node) {
    if (node) {
        print(node->left);
        std::cout << node->data << " ";
        print(node->right);
    }
}

void Tree::destroy(Node *node) {
    if (node) {
        destroy(node->left);
        destroy(node->right);
        delete node;
    }
}

void Tree::remove(int data) {
    Node *node = find(data);
    Node *nParent = node->parent;
    Node *littleGiant;
    if (node != nullptr && nParent != nullptr) {
        if (node->left == nullptr && node->right == nullptr) {
            if (nParent->left == node) nParent->left = nullptr;
            else nParent->right = nullptr;
            delete(node);
        } else if (node->left == nullptr && node->right != nullptr) {
            nParent->right = node->right;
            delete(node);
        } else if (node->left != nullptr && node->right == nullptr) {
            nParent->left = node->left;
        } else if (node->left != nullptr && node->right != nullptr) {
            if (nParent->right == node) {
                if (node->left->right != nullptr) {
                    littleGiant = node->left;
                    while (littleGiant->right) {
                        littleGiant = littleGiant->right;
                    }
                    littleGiant->right = node->right;
                    littleGiant->right->parent = littleGiant;
                    littleGiant->left = node->left;
                    littleGiant->left->parent = littleGiant;
                    littleGiant->parent->right = nullptr;
                    littleGiant->parent = nParent;
                    nParent->right=littleGiant;
                    delete(node);
                } else {
                    node->left->parent = node->parent;
                    node->left->right = node->right;
                    node->parent->right = node->left;
                    delete(node);
                }

            } else if (nParent->left == node) {
                if (node->right->left != nullptr) {
                    littleGiant = node->right;
                    while (littleGiant->left) {
                        littleGiant = littleGiant->left;
                    }
                    littleGiant->left = node->left;
                    littleGiant->left->parent = littleGiant;
                    littleGiant->right = node->right;
                    littleGiant->right->parent = littleGiant;
                    littleGiant->parent->left = nullptr;
                    littleGiant->parent = nParent;
                    nParent->left=littleGiant;
                    delete(node);
                } else {
                    node->right->parent = node->parent;
                    node->right->left = node->left;
                    node->parent->left = node->right;
                    delete(node);
                }
            }
        }
    }
}

