//
// Created by sanchez on 06.04.2020.
//

#include "ConcreteMediator.h"

void ConcreteMediator::sendMessage(BaseComponent *sender, std::string message)  {
    if (message != "") {
        this->netWork_->sendToServ(message);
    }
}