#include <iostream>
#include "LinkedList/LinkedList.h"
#include "BinaryTree/BinaryTree.h"

int main() {
//    LinkedList *list = new LinkedList();
//    list->insert(1);
//    list->insert(4);
//    list->insert(2);
//    list->insert(3);
//    list->print();
//    std::cout<<"*************************"<<std::endl;
//    list->set(0,2);
//    list->print();
//    list->get(2);
//    std::cout<<"*************************"<<std::endl;
//    list->delete_frist();
//    list->print();

    BinaryTree *tree = new BinaryTree();
    tree->insert(4);
    tree->insert(5);
    tree->insert(1);
    tree->insert(3);
    tree->insert(4);
    tree->print();
    std::cout<<"*************************"<<std::endl;
    tree->print(tree->root);



    return 0;
}