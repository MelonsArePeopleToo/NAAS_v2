//
// Created by sanchez on 02.04.2020.
//

#include "Interface.h"

void Interface::talkToAuth()
{
    std::string request_type;
    std::cin >> request_type;
    send (sock, (void *)request_type.c_str(), strlen(request_type.c_str()), 0);

}
