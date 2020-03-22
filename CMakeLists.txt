cmake_minimum_required(VERSION 3.15)
project(Algorithums_final C)

set(CMAKE_C_STANDARD 11)

add_executable(Algorithums_final
        Sources/main.c
        Sources/linkedList.c
        Sources/functions.c
        Header/list.h
        Header/data_store.h
        strList.c strList.h)
#create a new executable to test read
add_executable(Read_test Sources/read_file.c)
#create a new executable to test write
add_executable(Write_test Sources/write_in.c)
#creates a place to test the Linked list of strings
add_executable(stringListTest strList.c strList.h strLinkeListTest.c)


include_directories(Sources)
include_directories(Header)
include_directories(Other)


#install(TARGETS Algorithums_final DESTINATION bin)
