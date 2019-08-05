//
// Created by danium on 4/8/19.
//

#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>


int pene(int argc, char *argv[]) {

    struct sockaddr_in direccionServidor;
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = INADDR_ANY;
    direccionServidor.sin_port = htons(8080);

    int servidor = socket(AF_INET, SOCK_STREAM, 0);

    int activado = 1;
    setsockopt(servidor, SOL_SOCKET, SO_REUSEADDR, &activado, sizeof(activado));

    if (bind(servidor, (sockaddr*) &direccionServidor, sizeof(direccionServidor)) != 0) {
        perror("Falló el bind");
        return 1;
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
        return 1;
    }

    buffer[bytesRecibidos] = '\0';
    printf("Me llegaron %d bytes con %s", bytesRecibidos, buffer);

    free(buffer);
    return 0;
}