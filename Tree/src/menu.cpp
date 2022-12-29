#include "menu.h"

void menu(AVL_Tree *tree) {
    int choice;
    int actionedNumber;
    while (true) {
        std::cout << "\nCHOOSE WHAT U WANT TO DO:\n1. Add node\n2. Remove node\n3. Print tree\n4. Exit\n\nINPUT SPACE: ";
        std::cin >> choice;
        if (choice == ADD) {
            std::cout << "\nEnter the number u want to add: ";
            std::cin >> actionedNumber;
            tree->add(actionedNumber);
        } else if (choice == REMOVE) {
            std::cout << "\nEnter the number u want to remove: ";
            std::cin >> actionedNumber;
            tree->remove(actionedNumber);
        } else if (choice == PRINT) {
            tree->print();
        } else if (choice == EXIT) {
            std::cout << "Bye";
            break;
        }
    }
}
