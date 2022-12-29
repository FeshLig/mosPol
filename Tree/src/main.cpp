#include "menu.h"

int main() {
    AVL_Tree tree(15);
    
    // Node *son = tree.add(21);
    // Node *root = son->parent;

    // std::cout << root->height << std::endl;
    // std::cout << son->height << std::endl << std::endl;

    // std::cout << tree.height(root) << std::endl;
    // std::cout << tree.height(son) << std::endl << std::endl;

    // tree.add(32);
    // tree.add(48);

    // std::cout << root->height << std::endl;
    // std::cout << son->height << std::endl;
    // std::cout << son->right->height << std::endl;

    menu(&tree);
}

