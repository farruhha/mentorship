# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyCppProject VERSION 1.0)

# Set C++ standard (e.g., C++11, C++14, C++17)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the main executable and its source files
add_executable(MyCppExecutable main.cpp)

# Add any additional dependencies or libraries
# Example:
# target_link_libraries(MyCppExecutable my_library)

# Specify any installation instructions (optional)
# install(TARGETS MyCppExecutable DESTINATION bin)