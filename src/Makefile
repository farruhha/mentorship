CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Source code and object files
SOURCES = $(wildcard src/**/*.cpp)
OBJECTS = $(SOURCES:src/%.cpp=obj/%.o)

# Executable name
EXECUTABLE = mentorship

# Build the executable
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
    $(CXX) $(CXXFLAGS) $^ -o $@

obj/%.o: src/%.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@
