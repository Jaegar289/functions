#check cmake version
cmake_minimum_required(VERSION 2.8)

# Project main
project(functions_library)		

# Set sourse file for libraries
set(SOURCE_LIB1 randomize.cpp)
set(SOURCE_LIB2 cin_validate.cpp)	

#create static libraries
add_library(lib1 STATIC ${SOURCE_LIB1})
add_library(lib2 STATIC ${SOURCE_LIB2})
# Create main static library 
add_library(flib STATIC functions.h)	

# Link main library with another libraries
target_link_libraries(flib lib1)		
target_link_libraries(flib lib2)		