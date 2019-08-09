//
// Created by danium on 7/8/19.
//

#ifndef DS_LINKEDLIST_H
#define DS_LINKEDLIST_H


#include "Node.h"

class LinkedList {
public:
    Node *head;
    void insert(int data);
    void delete_frist();
    void set(int pos,int data);
    void get(int pos);

    void print();

};


#endif //DS_LINKEDLIST_H
