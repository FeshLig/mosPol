#ifndef MENU_H_
#define MENU_H_

#include "tree.h"
#include "avl_tree.h"

enum main_functions {
    ADD = 1,
    REMOVE,
    PRINT,
    EXIT
};

void menu(AVL_Tree *tree);

#endif  //  MENU_H_
