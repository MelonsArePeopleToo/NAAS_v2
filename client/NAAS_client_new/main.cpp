
#include "ConcreteMediator.h"




int main() {
    NetWork *net = new NetWork;
    Interface *inf = new Interface;

    ConcreteMediator *mediator = new ConcreteMediator(net, inf);

    inf->talkToAuth();

    return 0;






}
