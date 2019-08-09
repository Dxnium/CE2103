//
// Created by danium on 7/8/19.
//

#include "TreeNode.h"




int TreeNode::getData() const {
    return data;
}

void TreeNode::setData(int data) {
    TreeNode::data = data;
}

TreeNode *TreeNode::getRigth() const {
    return rigth;
}

void TreeNode::setRigth(TreeNode *rigth) {
    TreeNode::rigth = rigth;
}

TreeNode *TreeNode::getLeft() const {
    return left;
}

void TreeNode::setLeft(TreeNode *left) {
    TreeNode::left = left;
}

