
# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Source files and targets
SOURCES_NASH = nash.cpp
TARGET_NASH = nash_equilibrium

SOURCES_MIXED = mixed_strategy.cpp
TARGET_MIXED = mixed_strategy

# Build targets
all: $(TARGET_NASH) $(TARGET_MIXED)

$(TARGET_NASH): $(SOURCES_NASH)
	$(CXX) $(CXXFLAGS) -o $(TARGET_NASH) $(SOURCES_NASH)

$(TARGET_MIXED): $(SOURCES_MIXED)
	$(CXX) $(CXXFLAGS) -o $(TARGET_MIXED) $(SOURCES_MIXED)

# Clean target
clean:
	rm -f $(TARGET_NASH) $(TARGET_MIXED)


# Commands to run Python backends
run-backend-dynamic:
	./backend_dynamic.py
run-backend-multiple-nash:
	./backend_multiple_nash.py
run-backend:
	./backend.py
