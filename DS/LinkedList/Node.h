//
// Created by danium on 7/8/19.
//

#ifndef DS_NODE_H
#define DS_NODE_H


class Node {
public:
    int data;
    Node *next;
public:
    int getData();

    void setData(int data);

    Node *getNext() const;

    void setNext(Node *next);

    Node(int dat){
        data = dat;
    }

};


#endif //DS_NODE_H
