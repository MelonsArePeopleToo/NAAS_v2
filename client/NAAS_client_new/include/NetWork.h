//
// Created by sanchez on 31.03.2020.
//

#ifndef NAAS_CLIENT_NEW_NETWORK_H
#define NAAS_CLIENT_NEW_NETWORK_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>




class NetWork {
public:

    NetWork(){
        this->sock = socket(AF_INET, SOCK_STREAM, 0);
    };
    int connectToServer();

    void getAddr(const char *SERVER_ADDR, const int &SERVER_PORT);

    void getVIP();

private:


protected:
    int sock;
    const char *SERVER_ADDR;
    int SERVER_PORT;


};



#endif //NAAS_CLIENT_NEW_NETWORK_H
