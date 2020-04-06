//
// Created by sanchez on 06.04.2020.
//

#ifndef NAAS_CLIENT_NEW_CONCRETEMEDIATOR_H
#define NAAS_CLIENT_NEW_CONCRETEMEDIATOR_H

#include "Mediator.h"
#include "NetWork.h"
#include "Interface.h"



class ConcreteMediator : public  Mediator {
private:
    NetWork *netWork_;
    Interface *interface_;

public:
    ConcreteMediator (NetWork *net, Interface *inf) : netWork_(net), interface_(inf) {
        this->netWork_->setMediator(this);
        this->interface_->setMediator(this);
    }
    void sendMessage (BaseComponent *sender,std::string message);




};

#endif //NAAS_CLIENT_NEW_CONCRETEMEDIATOR_H
