cmake_minimum_required(VERSION 3.1)
project(homework5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wpedantic -Wshadow -Wundef -Wno-missing-field-initializers")

add_executable(hw5 main.cpp VintagePort.cpp VintagePort.hpp Port.cpp Port.hpp)
