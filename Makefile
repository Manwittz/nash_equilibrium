
# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Name of the target executable
TARGET = nash_equilibrium

# Source files
SOURCES = nash.cpp

# Build target
all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# Clean target
clean:
	rm -f $(TARGET)
