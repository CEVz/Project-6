cmake_minimum_required(VERSION 3.10)

project("Project 6"
  VERSION 0.0.0
  DESCRIPTION "CS 1521 Project 6"
  LANGUAGES CXX)

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC")
  add_compile_options(-Wall)
elseif ("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONs OFF)

add_executable(main
  project6.cpp
  Event.h
  EventBuilder.h
  EventType.h
  Simulation.h
  Statistics.h
  LinkedQueue.h
  PriorityQueue.h
  Node.h
  QueueInterface.h
  LinkedSortedList.h
  SortedListInterface.h
  PrecondViolatedExcep.cpp)