#include "tree.h"
#define LEFT 0
#define RIGHT 1


Tree::Tree(int data) {
    root = new Node(data);
}

Tree::~Tree() {
    destroy(root);
}

Node* Tree::add(int data) {
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
            return nullptr;
        }
    }
    *trouble = new Node(data);
    (*trouble)->parent = parent;
    tellFix(root);
    return *trouble;
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
    int nodeX = 50, nodeY = 2, difference = 25;
    int field[20][100] = {-10000};
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 100; j++) {
            field[i][j] = -10000;
        }
    }

    field[nodeY][nodeX] = node->data;
    coordinateDefenition(node->left, LEFT, field, difference, nodeX);
    coordinateDefenition(node->right, RIGHT, field, difference, nodeX);

    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0 && i != 0)
            std::cout << (i / 2) << ":\t";
        for (int j = 0; j < 100; j++) {
            if (field[i][j] != -10000) {
                std::cout << field[i][j];
            } else {
                printf(" ");
            }
        }
        std::cout << '\n';
    }
}

void Tree::coordinateDefenition(Node *node, int side, int ( &field )[20][100], int difference, int xCoord) {
    if (node) {
        if (side == LEFT) {
            xCoord -= difference;
        } else {
            xCoord += difference;
        }
        field[2 * (node->tell)][xCoord] = node->data;
        difference /= 2;
        coordinateDefenition(node->left, LEFT, field, difference, xCoord);
        coordinateDefenition(node->right, RIGHT, field, difference, xCoord);
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
    tellFix(root);
    heightFix(node);
}

int Tree::height(Node* node) {
    return node ? node->height : 0;
}

void Tree::tellFix(Node *node) {
    if (node) {
        if (node->parent != nullptr) {
            node->tell = node->parent->tell + 1;
        }
        tellFix(node->left);
        tellFix(node->right);
    }
}

void Tree::heightFix(Node* node) {
    int leftHeight = height(node->left);
	int rightHeight = height(node->right);
	node->height = ((leftHeight > rightHeight) ? leftHeight : rightHeight) + 1;
}
