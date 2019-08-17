//
// Created by danium on 14/8/19.
//

#ifndef GTK_TEST_CLIENT_H
#define GTK_TEST_CLIENT_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <json.hpp>
#include "Message.cpp"
using json = nlohmann::json;


class Client {
public:
    struct sockaddr_in direccionServidor;


    Client(std::string message){




        direccionServidor.sin_family = AF_INET;
        direccionServidor.sin_addr.s_addr = inet_addr("127.0.0.1");
        direccionServidor.sin_port = htons(8080);

        int cliente = socket(AF_INET, SOCK_STREAM, 0);
        if (connect(cliente, (sockaddr *) &direccionServidor, sizeof(direccionServidor)) != 0) {
            perror("No se pudo conectar");
        }



        //scanf("%s", mensaje);


        char msj[10];
        strcpy(msj,message.c_str());
        send(cliente,msj, strlen(msj), 0);

    }


};


#endif //GTK_TEST_CLIENT_H
