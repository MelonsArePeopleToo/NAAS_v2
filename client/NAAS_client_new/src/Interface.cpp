//
// Created by sanchez on 02.04.2020.
//

#include "Interface.h"

void Interface::talkToAuth()
{
    std::cin >> this->message;
    this->mediator_->sendMessage(this, this->message);
}
