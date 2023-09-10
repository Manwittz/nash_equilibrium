
# Nash Equilibrium Finder

## Description:
This project identifies Nash Equilibria in provided payoff matrices using C++. It includes capabilities for both pure strategy and mixed strategy (2x2 matrices) Nash Equilibria.

## Features:
- Provides functions to identify Nash Equilibria in 2D payoff matrices for both pure and mixed strategies.
- Web-based GUI (frontend) to input payoff matrices and visualize the results.
- Backend server (using Flask) to interface with the C++ code and provide results to the frontend.

## Usage:

### C++ Code:
1. Modify the `nash.cpp` or `mixed_strategy.cpp` files as needed.
2. Use the provided `Makefile` to compile the project:
   ```
   make
   ```
3. Run the generated executables:
   ```
   ./nash_equilibrium
   ```
   or
   ```
   ./mixed_strategy
   ```

### Web-based GUI:
1. Ensure you have Flask installed. If not, install it using:
   ```
   pip install Flask
   ```
2. Run the Flask server:
   ```
   python backend.py
   ```
3. Open the `frontend.html` in a browser directly or serve it using a web server (e.g., Python's built-in server or VSCode's Live Server).

## Requirements:
- C++ compiler with support for C++11.
- Python (for the Flask backend).
- Flask library (can be installed via pip).

## Enhancements:
- Mixed strategy Nash Equilibrium computation for 2x2 matrices.
- Web-based GUI to allow users to easily input matrices and view results.
