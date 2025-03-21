#define the minimum version of CMake required
cmake_minimum_required(VERSION 3.20)

# Set the project name
project(DeveloperGroup C)

# Set the standard C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add compiler options
add_compile_options(-Wall -Wextra -pedantic -O0)

# Create a static library from the Developer sources
add_library(devgroup STATIC src/developer.c src/developer_group.c)

# Add the directory with header files
target_include_directories(devgroup PUBLIC include)

# Create the executable "main"
add_executable(main src/main.c)

# Add the directory with header files
target_include_directories(main PUBLIC include)

# Link the library with the executable
target_link_libraries(main devgroup)