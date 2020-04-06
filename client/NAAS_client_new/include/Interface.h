//
// Created by sanchez on 02.04.2020.
//

#ifndef NAAS_CLIENT_NEW_INTERFACE_H
#define NAAS_CLIENT_NEW_INTERFACE_H


#include <iostream>
#include <cstring>
#include <string>

#include "Mediator.h"

class Interface : public BaseComponent
        {
public:
    void talkToAuth ();

private:
//    const int BUFF_SIZE = 4* 1024;
    std::string message;
};


#endif //NAAS_CLIENT_NEW_INTERFACE_H
