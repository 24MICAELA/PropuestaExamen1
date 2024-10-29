cmake_minimum_required(VERSION 3.10)
project(PropuestaExamen)

set(CMAKE_CXX_STANDARD 20)

include_directories(pitagoricos)

add_executable(PropuestaExamen main.cpp pitagoricos/triples.cpp)
