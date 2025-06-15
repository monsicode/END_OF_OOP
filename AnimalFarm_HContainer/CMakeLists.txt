cmake_minimum_required(VERSION 3.25)
project(AnimalFarm_HContainer)

set(CMAKE_CXX_STANDARD 17)

add_executable(AnimalFarm_HContainer main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Cow.cpp Cow.h Farm.cpp Farm.h)
