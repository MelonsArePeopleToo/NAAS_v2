//
// Created by sanchez on 06.04.2020.
//

#include "ConcreteMediator.h"

void ConcreteMediator::sendMessage(BaseComponent *sender, std::string message)
{
    if(message == "bye")
    {
        this->netWork_->sendToServ(message);
        this->netWork_->closeSock();
    }
    else
    {
        this->netWork_->sendToServ(message);
        this->netWork_->recvFromServ();
    }
}

void ConcreteMediator::recvMessage(BaseComponent *sender, std::string message)
{
    this->interface_->getMessage(message);
    this->interface_->sendMessage();
}

void ConcreteMediator::firstConnect(BaseComponent *sender,char *addr, int port)
{
    this->netWork_->getAddr(addr, port);
    this->netWork_->connectToServer();
    this->netWork_->sendToServ("connect name pass");
    this->netWork_->recvFromServ();

}
