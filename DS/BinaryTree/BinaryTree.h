//
// Created by danium on 7/8/19.
//

#ifndef DS_BINARYTREE_H
#define DS_BINARYTREE_H


#include "TreeNode.h"

class BinaryTree {
public:
    TreeNode *root = nullptr;
    void insert(int data);
    TreeNode* insertAux(TreeNode *r,int data);
    void del(int data);

    void print();
    void print(TreeNode *r);





};


#endif //DS_BINARYTREE_H
