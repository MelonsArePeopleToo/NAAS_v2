//
// Created by sanchez on 31.03.2020.
//
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <net/if.h>
#include <linux/if_tun.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <sys/time.h>
#include <cerrno>
#include <cstdarg>
#include <string>
#include <iostream>

#include "VPNNet.h"

int VPNNet::connectToServer(const std::string &ifname, const std::string &remote_ip, int sockFd, int tapFd)
{

}

int VPNNet::tunAlloc(std::string &dev, int flags)
{
    struct ifreq ifr;
    int fd, err;
    const char *clonedev = "/dev/net/tun";

    if( (fd = open(clonedev , O_RDWR)) < 0 ) {
        perror("Opening /dev/net/tun");
        return fd;
    }

    memset(&ifr, 0, sizeof(ifr));

    ifr.ifr_flags = flags;

    if (!dev.empty()) {
        strncpy(ifr.ifr_name, dev.c_str(), IFNAMSIZ);
    }

    if( (err = ioctl(fd, TUNSETIFF, (void *)&ifr)) < 0 ) {
        perror("ioctl(TUNSETIFF)");
        close(fd);
        return err;
    }

    dev = ifr.ifr_name;

    return fd;
}

void termHandler(int signal)
{
    VPNNet vpnNet;
    int s = socket(AF_INET, SOCK_STREAM, 0);
    in_addr in;
    int res = inet_aton(vpnNet.SERVER_ADDR, &in);
    if (!res) {
        exit;
    }

    sockaddr_in sockaddr_ = {
            .sin_family = AF_INET,
            .sin_port = htons(vpnNet.SERVER_PORT),
            .sin_addr = in
    };
    connect(s, (sockaddr*) &sockaddr_, sizeof(sockaddr_));
    send(s, (void *)"disconnect", strlen("disconnect"), 0);

    close(vpnNet.sockFd);
    close(vpnNet.tapFd);
    vpnNet.deleteTun();

    exit(EXIT_SUCCESS);
}

void VPNNet::createTun(const std::string &vip)
{
    std::string syscall = "./scripts/tun.sh ";
    syscall += "vpn_tun";
    syscall += " ";
    syscall += vip;
    system(syscall.c_str());

}

void VPNNet::deleteTun() {
    std::string syscall = "./scripts/tun_del.sh ";
    syscall += "vpn_tun";
    system(syscall.c_str());
}

int VPNNet::createDaemon() {
    int pid = fork();

    if (pid == -1)
    {
        printf("Error: Start Daemon failed (%s)\n", strerror(errno));
        return -1;
    }
    else if (!pid)
    {
        setsid();

        printf("My pid is %i\n", getpid());

        std::signal(SIGTERM, termHandler);

        connectToServer("vpn_tun", SERVER_ADDR, this->sockFd, this->tapFd);

        return 0;
    }
    else
    {
        return 0;
    }
}


