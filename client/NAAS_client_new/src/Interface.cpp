//
// Created by sanchez on 02.04.2020.
//

#include "Interface.h"




void Interface::getMessage(std::string recvMessage)
{
    this->message = recvMessage;
    if (recv) {
        std::cout << this->message << std::endl;
    }
}

void Interface::talkToAuth()
{
    this->mediator_->firstConnect(this, "127.0.0.1", 12345);
}

void Interface::sendMessage()
{
    std::cout << "send"<< std::endl;
    std::cin >> this->message;
    this->mediator_->sendMessage(this, this->message);
}



