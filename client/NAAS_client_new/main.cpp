#include <iostream>

//#include "NetWork.h"
//#include "VPNNet.h"
//#include "Interface.h"
//#include "Mediator.h"
#include "ConcreteMediator.h"


int main() {
    NetWork *net = new NetWork;
    Interface *inf = new Interface;

    ConcreteMediator *mediator = new ConcreteMediator(net, inf);

    net->getAddr("127.0.0.1", 12345); // addr of auth
    net->connectToServer();

    inf->talkToAuth();

    return 0;






}
