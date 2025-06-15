cmake_minimum_required(VERSION 3.25)
project(exam3)

set(CMAKE_CXX_STANDARD 17)

add_executable(exam3 main.cpp Person.cpp Person.h Student.cpp Student.h Teacher.cpp Teacher.h Building.cpp Building.h University.cpp University.h Home.cpp Home.h Library.cpp Library.h Statistic.cpp Statistic.h)
