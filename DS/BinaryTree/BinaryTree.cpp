//
// Created by danium on 7/8/19.
//

#include <iostream>
#include "BinaryTree.h"
#include "TreeNode.h"

using namespace std;

void BinaryTree::insert(int data) {
    root = insertAux(root,data);



}

TreeNode* BinaryTree::insertAux(TreeNode *r, int data) {
   if(r== nullptr){
       return new TreeNode(data);
   }
   if(data>=r->getData()) {
//       cout << "Derecha" << endl;
       r->rigth=insertAux(r->getRigth(), data);

   }
   else if(data<r->getData()){
//           cout<<"Izquierda"<<endl;
           r->left=insertAux(r->getLeft(),data);
       }
   return r;
}


void BinaryTree::del(int data) {

}

void BinaryTree::print() {
    TreeNode *tmp =root;
    while(tmp!= nullptr){
        cout<<tmp->getData()<<endl;
        if(tmp->getLeft() != nullptr){
            cout<<tmp->getData()<<endl;
        }
        tmp = tmp->getRigth();

    }
    delete tmp;
}

//void BinaryTree::printauxdr(TreeNode *r) {
//
//    if(r->getRigth()!= nullptr){
//        printauxdr(r->getRigth());
//    }else{
//        cout<<r->getData()<<endl;
//        printauxiz(r);
//    }
//}
//
//void BinaryTree::printauxiz(TreeNode *r) {
//    if(r->getLeft()!= nullptr){
//        printauxiz(r->getLeft());
//    }else{
//     cout<<r->getData()<<endl;
//     printauxdr(r);
//    }
//}






