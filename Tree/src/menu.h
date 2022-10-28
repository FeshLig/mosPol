#ifndef MENU_H_
#define MENU_H_

#include "tree.h"

enum main_functions {
    ADD = 1,
    REMOVE,
    PRINT,
    EXIT
};

void menu(Tree *tree) {
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

#endif  //  MENU_H_
