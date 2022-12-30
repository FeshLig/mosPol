#ifndef AVL_TREE_H_
#define AVL_TREE_H_

#include <iostream>
#include "node.h"
#include "tree.h"

class AVL_Tree : public Tree {
    private:
        int balanceFactor(Node* p);
        Node* rightRotate(Node *node);
        Node* leftRotate(Node *node);
        Node* balance(Node* node);
        Node* remove(Node* node, int data);
        Node* add(Node *node, Node *parent, int value);
        Node* parentFix(Node *node, Node *parent);
        Node* findmin(Node* p);
        Node* removemin(Node* p);

    public:
        AVL_Tree(int data);
        Node* add(int value);
        Node* remove(int data);
};

#endif  //  AVL_TREE_H_
