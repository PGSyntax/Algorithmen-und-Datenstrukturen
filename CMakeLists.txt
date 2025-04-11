cmake_minimum_required(VERSION 3.30)
project(P1_1_Printer)

set(CMAKE_CXX_STANDARD 20)

add_executable(P1_1_Printer main.cpp job.hpp printer.cpp printer.h)
