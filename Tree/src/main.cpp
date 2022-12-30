#include "menu.h"

int main() {
    int firstNode;
    std::cout << "Input first node: ";
    std::cin >> firstNode;
    AVL_Tree tree(firstNode);
    menu(&tree);
}

