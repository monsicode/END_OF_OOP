cmake_minimum_required(VERSION 3.25)
project(RockPaperS)

set(CMAKE_CXX_STANDARD 17)

add_executable(RockPaperS main.cpp Player.cpp Player.h Scissors.cpp Scissors.h Rock.cpp Rock.h Paper.cpp Paper.h)
