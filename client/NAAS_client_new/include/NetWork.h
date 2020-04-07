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
#include <unistd.h>

#include "Mediator.h"



class NetWork : public BaseComponent {
public:
    int connectToServer();

    void getAddr(const char *SERVER_ADDR, const int &SERVER_PORT);

    void sendToServ(std::string message);

    void recvFromServ();

    void closeSock();

private:


protected:
    int sock;
    const char *SERVER_ADDR;
    int SERVER_PORT;
    char buff[4*1024];
    std::string message;
};



#endif //NAAS_CLIENT_NEW_NETWORK_H
