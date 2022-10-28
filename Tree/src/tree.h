#ifndef TREE_H_
#define TREE_H_

#include <iostream>
#include "node.h"

class Tree {
    private:
        Node *root;
        void print(Node *node);
        void destroy(Node *root);
        Node* find(int data, Node *node);
    public:
        Tree(int data);
        ~Tree();

        void add(int data);
        Node* find(int data);
        void print();
        void remove(int data);
};

#endif  //  TREE_H_
