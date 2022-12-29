#include "avl_tree.h"

AVL_Tree::AVL_Tree(int data) : Tree::Tree(data) {}

int AVL_Tree::balanceFactor(Node* p) {
	return height(p->right)-height(p->left);
}

Node* AVL_Tree::rightRotate(Node *node) {
    Node* left = node->left;
	node->left = left->right;
	left->right = node;
	left->parent = node->parent;
	if (node->left)
		node->left->parent = node;
	node->parent = left;
	heightFix(node);
	heightFix(left);
	return left;
}

Node* AVL_Tree::leftRotate(Node *node) {
	Node* right = node->right;
	node->right = right->left;
	right->left = node;
	right->parent = node->parent;
	if (node->right)
		node->right->parent = node;
	node->parent = right;
	heightFix(node);
	heightFix(right);
	return right;
}

Node* AVL_Tree::balance(Node* node) {
    heightFix(node);
	if (balanceFactor(node) == 2 ) {
		if (balanceFactor(node->right) < 0)
			node->right = rightRotate(node->right);
		return leftRotate(node);
		std::cout << "Right Rotate";
	}
	if (balanceFactor(node) == -2 ) {
		if (balanceFactor(node->left) > 0)
			node->left = leftRotate(node->left);
		return rightRotate(node);
		std::cout << "Left Rotate";
	}
	return node;
}

Node* AVL_Tree::add(Node *node, Node *parent, int data) {
	if (!node) {
		Node *newNode = new Node(data);
		newNode->parent = parent;
		return newNode;
	}
	if (data < node->data)
		node->left = add(node->left, node, data);
	else
		node->right = add(node->right, node, data);
    //tellFix(root);
	return balance(node);
}

Node* AVL_Tree::add(int value) {
	Node *newNode = add(root, nullptr, value);
	tellFix(root);
	return newNode;
}
