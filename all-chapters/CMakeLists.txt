cmake_minimum_required(VERSION 3.10)

project(datamember)

add_executable(datamember data-members.cpp)

add_executable(datmemberclass data-members-class.cpp)

add_executable(functionmember function-member.cpp)

add_executable(constdest constructor-destructor.cpp)

add_executable(construct constructors.cpp)
    
add_executable(impexp implicit-explicit.cpp)

add_executable(namespace namespaces.cpp)
    
add_executable(selfref self-reference.cpp)

add_executable(thisuse thisusage.cpp)

add_executable(overloading overloading.cpp)


    
