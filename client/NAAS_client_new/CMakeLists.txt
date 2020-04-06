cmake_minimum_required(VERSION 3.15)
project(NAAS_client_new)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

file (GLOB SRCS
        "src/*.cpp"
        )
file (GLOB HDRS
        "include/*.h"
        )

add_executable(client main.cpp ${SRCS} ${HDRS} СlassMediator.cpp СlassMediator.h)
