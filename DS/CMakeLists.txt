cmake_minimum_required(VERSION 3.3)
project(gtk_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp LinkedList/LinkedList.cpp LinkedList/LinkedList.h LinkedList/Node.cpp LinkedList/Node.h BinaryTree/BinaryTree.cpp BinaryTree/BinaryTree.h BinaryTree/TreeNode.cpp BinaryTree/TreeNode.h Sockets/Server.cpp Sockets/Server.h GUI/ClientGUI.cpp GUI/ClientGUI.hpp GUI/arbolGUI.cpp GUI/arbolGUI.h GUI/listaGUI.cpp GUI/listaGUI.h Sockets/Client.cpp Sockets/Client.h Sockets/Message.cpp)
add_executable(gtk_test ${SOURCE_FILES})

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER})

target_link_libraries(gtk_test ${GTK3_LIBRARIES})