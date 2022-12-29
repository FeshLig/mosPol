#ifndef TREE_H_
#define TREE_H_

#include <iostream>
#include <math.h>
#include "node.h"

class Tree {
    protected:
        Node *root;
        void print(Node *node);
        void destroy(Node *root);
        Node* find(int data, Node *node);
        void heightFix(Node* p);
        void coordinateDefenition(Node *node, int side, int ( &field )[20][100], int difference, int xCoord);
        void tellFix(Node *node);
        int height(Node* p);
    public:
        Tree(int data);
        ~Tree();

        Node* add(int data);
        Node* find(int data);
        void print();
        void remove(int data);
};

#endif  //  TREE_H_
