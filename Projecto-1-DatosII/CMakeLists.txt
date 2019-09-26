cmake_minimum_required(VERSION 3.14)
project(Projecto_1_DatosII)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(cpr-1.3.0/cpr)


add_executable(Projecto_1_DatosII main.cpp Pelicula.cpp)

include_directories(${CPR_INCLUDE_DIRS})
target_link_libraries(${Projecto_1_DatosII} ${CPR_LIBRARIES})