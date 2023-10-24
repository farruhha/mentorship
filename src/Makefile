CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Source code and object files
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(SOURCES:src/%.cpp=obj/%.o)

# Executable name
EXECUTABLE = myprogram

# Build the executable
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
    $(CXX) $(CXXFLAGS) $^ -o $@

obj/%.o: src/%.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@
