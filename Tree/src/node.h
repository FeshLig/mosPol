#ifndef NODE_H_
#define NODE_H_

typedef struct Node {
    int data;
    int height;
    int tell;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
        height = 1;
        tell = 1;
    }
} Node;


#endif  //  NODE_H_
