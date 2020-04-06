#include <iostream>

#include "NetWork.h"
#include "VPNNet.h"
#include "Interface.h"



int main() {
    NetWork net;



    NetWork *pNetWork = &net;

    pNetWork->getAddr("127.0.0.1", 12345); // addr of auth
    pNetWork->connectToServer();
    Interface interface;
    interface.talkToAuth();

    return 0;






}
