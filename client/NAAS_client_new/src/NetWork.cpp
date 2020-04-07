//
// Created by sanchez on 31.03.2020.
//

#include <sstream>
#include <iostream>
#include "NetWork.h"

void NetWork::getAddr(const char *SERVER_ADDR, const int &SERVER_PORT)
{
    this->SERVER_ADDR = SERVER_ADDR;
    this->SERVER_PORT = SERVER_PORT;
}

int NetWork::connectToServer()
{
    this->sock = socket(AF_INET, SOCK_STREAM, 0);

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


void NetWork::recvFromServ()
{
    int recvBytes = recv(sock, buff, sizeof(buff), 0);

    if (recvBytes > 0)
    {
        std::stringstream input (buff);
        this->message = "";
        input >> this->message;

        this->mediator_->recvMessage(this, this->message);
    }
}

void NetWork::sendToServ(std::string message_)
{
    this->message = message_;
    send (sock, (void *)message.c_str(), strlen(message.c_str()), 0);

}

void NetWork::closeSock()
{
    close(sock);
}
