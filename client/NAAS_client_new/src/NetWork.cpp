//
// Created by sanchez on 31.03.2020.
//
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>

#include "NetWork.h"

void NetWork::getAddr(const char *SERVER_ADDR, const int &SERVER_PORT)
{
    this->SERVER_ADDR = SERVER_ADDR;
    this->SERVER_PORT = SERVER_PORT;
}

int NetWork::connectToServer()
{
    in_addr addr;
    int res = inet_aton(this->SERVER_ADDR, &addr);
    if (!res) {
        return -2;
    }

    sockaddr_in sockaddr_ = {
            .sin_family = AF_INET,
            .sin_port = htons(this->SERVER_PORT),
            .sin_addr = addr
    };

    return  connect(sock, (sockaddr*) &sockaddr_, sizeof(sockaddr_));
}

void NetWork::getVIP() {

}

void NetWork::recv() {

}

void NetWork::sendToServ(std::string message){
    send (sock, (void *)message.c_str(), strlen(message.c_str()), 0);
    std::cout<< message << " sended  "<< "Mediator is alive!!!!!!!!!" << std::endl;
}
