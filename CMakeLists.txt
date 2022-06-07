cmake_minimum_required(VERSION 3.22)
project(CPP_04)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP_04 ex00/main.cpp ex00/Animal.cpp ex00/Cat.cpp ex00/Dog.cpp ex00/WrongAnimal.cpp ex00/WrongAnimal.h ex00/WrongCat.cpp ex00/WrongCat.h)
