//
// Created by danium on 7/8/19.
//

#ifndef DS_TREENODE_H
#define DS_TREENODE_H




class TreeNode {
public:
    int data;
    TreeNode *rigth =nullptr;
    TreeNode *left= nullptr;

    TreeNode(int data){
        setData(data);
    };

    int getData() const;

    void setData(int data);

    TreeNode *getRigth() const;

    void setRigth(TreeNode *rigth);

    TreeNode *getLeft() const;

    void setLeft(TreeNode *left);

};


#endif //DS_TREENODE_H
