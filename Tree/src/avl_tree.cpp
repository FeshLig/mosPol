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
	if (root->parent != nullptr) {
		root = root->parent;
		root->tell = 1;
	}
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
	if (root->parent != nullptr) {
		root = root->parent;
		root->tell = 1;
	}
	return right;
}

Node* AVL_Tree::balance(Node* node) {
    heightFix(node);
	if (balanceFactor(node) == 2 ) {
		if (balanceFactor(node->right) < 0)
			node->right = rightRotate(node->right);
		return leftRotate(node);
	}
	if (balanceFactor(node) == -2 ) {
		if (balanceFactor(node->left) > 0)
			node->left = leftRotate(node->left);
		return rightRotate(node);
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
	return balance(node);
}

Node* AVL_Tree::add(int value) {
	Node *newNode = add(root, nullptr, value);
	tellFix(root);
	return newNode;
}

Node* AVL_Tree::findmin(Node* p) {
	return p->left ? findmin(p->left) : p;
}

Node* AVL_Tree::removemin(Node* node) {
	if (node->left == nullptr)
		return node->right;
	node->left = removemin(node->left);
	return balance(node);
}

Node* AVL_Tree::remove(Node* node, int data) {
	if (!node) return 0;
	if (data < node->data)
		node->left = remove(node->left, data);
	else if (data > node->data)
		node->right = remove(node->right, data);	
	else {
		if (node != root) {
			Node* mainParent = node->parent;
			Node* leftNode = node->left;
			if (leftNode)
				leftNode->parent = mainParent;
			Node* rightNode = node->right;
			delete node;
			if (!rightNode)
				return leftNode;
			Node* min = findmin(rightNode);
			min->right = removemin(rightNode);
			min->left = leftNode;
			min->parent = mainParent;
			if (leftNode)
				leftNode->parent = min;
			rightNode->parent = min;
			return balance(min);
		}
	}
	return balance(node);
}

Node* AVL_Tree::remove(int data) {
	Node *node = remove(root, data);
	parentFix(root, nullptr);
	tellFix(root);
	return node;
}

Node* AVL_Tree::parentFix(Node *node, Node *parent) {
	if (!node)
		return nullptr;
	parentFix(node->left, node);
	parentFix(node->right, node);
	node->parent = parent;
	return nullptr;
}
