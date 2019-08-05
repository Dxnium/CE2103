//
// Created by danium on 4/8/19.
//

#ifndef GTK_TEST_SERVER_H
#define GTK_TEST_SERVER_H


#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>

class Server {
private:
    struct sockaddr_in direccionServidor;
    int servidor = socket(AF_INET, SOCK_STREAM, 0);
    int activado = 1;

public:
    Server();

};


#endif //GTK_TEST_SERVER_H
