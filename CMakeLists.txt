#check cmake version
cmake_minimum_required(VERSION 2.8)

# Project settings
project(functions_library)
set(CMAKE_CXX_STANDARD 17)		

# Set sourse file for libraries
set(SOURCE_LIBS randomize.cpp cin_validate.cpp binary_tree.hpp)	


#create static libraries
add_library(libs STATIC ${SOURCE_LIBS})
set_target_properties(libs PROPERTIES LINKER_LANGUAGE CXX)
# Create main static library 
add_library(flib STATIC functions.hpp)	

# Link main library with another libraries
target_link_libraries(flib libs)		