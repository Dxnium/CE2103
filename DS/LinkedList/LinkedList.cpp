//
// Created by danium on 7/8/19.
//

#include <clocale>
#include <iostream>
#include "LinkedList.h"

using namespace std;

void LinkedList::insert(int data) {
    Node *node = new Node(data);
    if(head == nullptr){
        head = node;
    }else{
        node->setNext(head);
        head = node;
    }

}

void LinkedList::print() {
    Node *tmp = head;
    while(tmp != nullptr){
        cout<<tmp->getData()<<endl;
        tmp = tmp->getNext();
    }
    delete tmp;

}

void LinkedList::delete_frist() {
    Node *tmp = head;
    head = head->next;
    delete tmp;

}

void LinkedList::set(int pos, int data) {
    Node *tmp = head;
    int index=0;
    while(tmp != nullptr){
        if(index == pos){
            tmp->setData(data);
        }
        tmp = tmp->getNext();
        index++;
    }
    delete tmp;
}

void LinkedList::get(int pos) {
    Node *tmp = head;
    int index=0;
    while(tmp != nullptr){
        if(index == pos){
            cout<<tmp->getData()<<"*"<<endl;
        }
        tmp = tmp->getNext();
        index++;
    }
    delete tmp;
}
