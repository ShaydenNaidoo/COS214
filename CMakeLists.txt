cmake_minimum_required(VERSION 3.27)
project(COS214)

set(CMAKE_CXX_STANDARD 14)

include_directories("Practical 2")

add_executable(COS214
        "Practical 2/main.cpp"
        "Practical 2/SoldierFactory.cpp"
        "Practical 2/SoldierFactory.h"
        "Practical 2/Soldiers.cpp"
        "Practical 2/Soldiers.h"
        "Practical 2/Soldiers.h"
        "Practical 2/Memento.cpp"
        "Practical 2/Memento.h"
        "Practical 2/Memento.h"
)
