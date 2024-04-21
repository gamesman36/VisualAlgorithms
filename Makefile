# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++20

# SFML libraries
LIBS = -lsfml-graphics -lsfml-window -lsfml-system

# Source files
SRCS = main.cpp draw.cpp menu.cpp sorts.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target: clean object files
remove_objs:
	rm -f $(OBJS)

# Target to build the executable
all: a.out

a.out: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<