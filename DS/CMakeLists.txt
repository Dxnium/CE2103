cmake_minimum_required(VERSION 3.14)
project(DS)

set(CMAKE_CXX_STANDARD 14)

add_executable(DS main.cpp LinkedList/LinkedList.cpp LinkedList/LinkedList.h LinkedList/Node.cpp LinkedList/Node.h BinaryTree/BinaryTree.cpp BinaryTree/BinaryTree.h BinaryTree/TreeNode.cpp BinaryTree/TreeNode.h)