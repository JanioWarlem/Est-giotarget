cmake_minimum_required(VERSION 3.27)
project(temp C)

set(CMAKE_C_STANDARD 11)

add_library(temp STATIC atividade1.c
        atividade2.c
        atividade5.c)
