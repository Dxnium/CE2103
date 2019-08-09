//
// Created by danium on 7/8/19.
//

#include "Node.h"


int Node::getData(){
    return data;
}

void Node::setData(int data) {
    Node::data = data;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
