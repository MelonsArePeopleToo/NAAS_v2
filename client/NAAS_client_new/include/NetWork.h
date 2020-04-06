//
// Created by sanchez on 31.03.2020.
//

#ifndef NAAS_CLIENT_NEW_NETWORK_H
#define NAAS_CLIENT_NEW_NETWORK_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <cstring>
#include <string>

#include "Mediator.h"



class NetWork : public BaseComponent {
public:

    NetWork(){
        this->sock = socket(AF_INET, SOCK_STREAM, 0);
    };

    int connectToServer();

    void getAddr(const char *SERVER_ADDR, const int &SERVER_PORT);

    void getVIP();

    void sendToServ(std::string message);

    void recv();

private:


protected:
    int sock;
    const char *SERVER_ADDR;
    int SERVER_PORT;
};



#endif //NAAS_CLIENT_NEW_NETWORK_H
