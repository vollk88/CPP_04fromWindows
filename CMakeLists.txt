cmake_minimum_required(VERSION 3.22)
project(CPP_04)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP_04 ex02/main.cpp ex02/Animal.cpp ex02/Cat.cpp ex02/Dog.cpp ex02/WrongAnimal.cpp ex02/WrongCat.cpp ex02/Brain.cpp)