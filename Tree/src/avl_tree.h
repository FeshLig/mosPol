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


    public:
        AVL_Tree(int data);
        Node* add(Node *node, Node *parent, int value);
        // Node* add(int value) {return 0;}
        Node* add(int value);
};

#endif  //  AVL_TREE_H_
