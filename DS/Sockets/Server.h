//
// Created by danium on 9/8/19.
//

#ifndef GTK_TEST_SERVER_H
#define GTK_TEST_SERVER_H


#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <json.hpp>
#include "../BinaryTree/BinaryTree.h"
#include "../LinkedList/LinkedList.h"
#include <iostream>

using namespace std;

using json = nlohmann::json;
class Server {
private:
    struct sockaddr_in direccionServidor;
    int servidor = socket(AF_INET, SOCK_STREAM, 0);
    int activado = 1;
    bool DS = true;




public:
    Server();
    BinaryTree *tree;
    LinkedList *list;
    int cmd;
    int num;

    void to_do(std::string buffer){


//        std::cout<<buffer<<std::endl;
       if(DS) {
           std::string delimiter = ",";
           message(buffer);
           if (cmd == 2) {
               tree = new BinaryTree();
               cout<<"arbol created"<<endl;
           }if (cmd == 1) {
               list = new LinkedList();
               cout<<"lista created"<<endl;
           }
           if(tree != nullptr){
               if(cmd == 3){
                    tree->insert(num);
                    tree->print();
               }if(cmd == 4){
                   tree->del(num);
               }

           }else{
               if(cmd == 3){
                   list->insert(num);
                   list->print();
                   cmd = 0;
               }
               if(cmd == 4){
                   list->delete_frist();
                   list->print();
                   cmd = 0;
               }
               if(cmd = 5){
                   list->get(num);
                   cmd = 0;}
//               }if(cmd = 6){
//                   list->set(0,num);
//                   list->print();
//                   cmd = 0;
//               }
           }
       }
    };
    void message(std::string buffer){

        std::string s = buffer;
        std::string delimiter = ",";
//        std::string command = s.substr(0, s.find(delimiter));
//        cmd = command;
        this->num = std::atoi (s.substr(s.find(delimiter)+1, sizeof(s)).c_str());
        this->cmd = std::atoi (s.substr(0, s.find(delimiter)).c_str());
//        cout<<cmd<<endl;
//        cout<<num<<endl;
    }

};

#endif //DS_SERVER_H
