#ifndef NODE_H_
#define NODE_H_

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
} Node;


#endif  //  NODE_H_
