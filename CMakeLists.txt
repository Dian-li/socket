cmake_minimum_required(VERSION 3.8)
project(socket)

set(CMAKE_CXX_STANDARD 11)
ADD_DEFINITIONS(-Wall)
aux_source_directory(. SOURCE_FILES)

#set(SOURCE_FILES cEpollServer.cpp)
#set(SOURCE_FILES main.cpp)
add_executable(socket ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(socket pthread)



