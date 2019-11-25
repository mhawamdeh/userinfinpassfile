cmake_minimum_required(VERSION 3.15)
project(files)

set(CMAKE_CXX_STANDARD 14)

add_executable(files main.cpp readingLines.cpp readingandstrippinglines.h tokenizeLines.cpp user_info.cpp)