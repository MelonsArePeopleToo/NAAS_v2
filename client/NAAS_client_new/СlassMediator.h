//
// Created by sanchez on 06.04.2020.
//

#ifndef NAAS_CLIENT_NEW_СLASSMEDIATOR_H
#define NAAS_CLIENT_NEW_СLASSMEDIATOR_H

#include "Interface.h"
#include "NetWork.h"
#include "VPNNet.h"

class BaseComponent;

class СlassMediator {
public:
    virtual void message(BaseComponent *sender) const = 0;
};

/**
 * Базовый Компонент обеспечивает базовую функциональность хранения экземпляра
 * посредника внутри объектов компонентов.
 */

class BaseComponent {
protected:
    СlassMediator *mediator_;

public:
    BaseComponent (СlassMediator *mediator = nullptr) : mediator_(mediator){
    }
    void setMediator(СlassMediator *mediator) {
        this->mediator_ = mediator;
    }

};





#endif //NAAS_CLIENT_NEW_СLASSMEDIATOR_H
