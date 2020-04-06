//
// Created by sanchez on 06.04.2020.
//

#ifndef NAAS_CLIENT_NEW_MEDIATOR_H
#define NAAS_CLIENT_NEW_MEDIATOR_H

#include <string>


class BaseComponent;

class Mediator
        {
public:
    virtual void sendMessage(BaseComponent *sender,std::string message){};
};


class BaseComponent
        {
protected:
    Mediator *mediator_;

public:
    BaseComponent(Mediator *mediator = nullptr) : mediator_(mediator){
    }
    void setMediator(Mediator *mediator) ;

};


#endif //NAAS_CLIENT_NEW_MEDIATOR_H
