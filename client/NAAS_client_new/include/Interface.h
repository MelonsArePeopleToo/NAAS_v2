//
// Created by sanchez on 02.04.2020.
//

#ifndef NAAS_CLIENT_NEW_INTERFACE_H
#define NAAS_CLIENT_NEW_INTERFACE_H


#include <iostream>
#include <cstring>
#include <string>

#include "NetWork.h"

class Interface
        {
public:

    void talkToAuth ();

private:
    const int BUFF_SIZE = 4* 1024;
};


#endif //NAAS_CLIENT_NEW_INTERFACE_H
