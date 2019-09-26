#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <json-c/json.h>
#include <json.hpp>


// for convenience
using json = nlohmann::json;


int main(void) {
    struct sockaddr_in direccionServidor;
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = inet_addr("127.0.0.1");
    direccionServidor.sin_port = htons(8080);

    int cliente = socket(AF_INET, SOCK_STREAM, 0);
    if (connect(cliente, (sockaddr *) &direccionServidor, sizeof(direccionServidor)) != 0) {
        perror("No se pudo conectar");
        return 1;
    }


    char mensaje[1000];


    //scanf("%s", mensaje);

    json j;
    j["code"]= 1;

    strcpy(mensaje,j.dump().c_str());
    std::cout<<j.dump()<<std::endl;

    send(cliente,mensaje, strlen(mensaje), 0);

    return 0;
}
//int main(){
//    // create an empty structure (null)
//    json j;
//
//    std::cout<<j.dump(0)<<std::endl;
//}

