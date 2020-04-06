//
// Created by sanchez on 31.03.2020.
//

#ifndef NAAS_CLIENT_NEW_VPNNET_H
#define NAAS_CLIENT_NEW_VPNNET_H

#include <string>
#include <unistd.h>
#include <csignal>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>
#include <cstring>
#include <sstream>


#include "NetWork.h"

class VPNNet {
public:
    int connectToServer(const std::string &ifname, const std::string &remote_ip, int sockFd, int tapFd);

    int createDaemon();


private:
    friend void termHandler(int signal);
    void createTun(const std::string &vip);
    void deleteTun();
    int tunAlloc(std::string &dev, int flags);
    int sockFd, tapFd;


};


#endif //NAAS_CLIENT_NEW_VPNNET_H
