//
// Created by danium on 4/8/19.
//

#include "Server.h"

Server::Server() {
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = INADDR_ANY;
    direccionServidor.sin_port = htons(8080);

    if (bind(servidor, (sockaddr*) &direccionServidor, sizeof(direccionServidor)) != 0) {
        perror("Falló el bind");
    }

    printf("Estoy escuchando\n");
    listen(servidor, 100);

    //------------------------------

    struct sockaddr_in direccionCliente;
    unsigned int len;
    int cliente = accept(servidor, (sockaddr*) &direccionCliente, &len);

    printf("Recibí una conexión en %d!!\n", cliente);
    send(cliente, "Hola, desde el server!", 22, 0);
    send(cliente, ":)\n", 4, 0);
    //------------------------------

    char *buffer = (char*)malloc(5);

    int bytesRecibidos = recv(cliente, buffer, 4, MSG_WAITALL);
    if (bytesRecibidos < 0) {
        perror("Cliente desconectado");

    }

    buffer[bytesRecibidos] = '\0';
    printf("Me llegaron %d bytes con %s", bytesRecibidos, buffer);

    free(buffer);
}