
# Nash Equilibrium Finder

## Description:
This project identifies Nash Equilibria in provided payoff matrices using C++. It offers capabilities for both pure strategy and mixed strategy Nash Equilibria. Furthermore, it now supports dynamic matrices, allowing users to define the size of the matrix they wish to analyze.

## Features:
- Provides functions to identify Nash Equilibria in payoff matrices of varying dimensions for pure strategies.
- Web-based GUI (frontend) to input payoff matrices of custom dimensions and visualize the results.
- Backend server (using Flask) to interface with the C++ code and provide results to the frontend.
- Visualization of Nash Equilibrium for mixed strategies in 2x2 matrices.

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
1. Specify the matrix dimensions in the provided input field.
2. Click the "Generate Matrix" button to dynamically create input fields based on the specified dimensions.
3. Input the payoff values for each player.
4. Click the "Find Nash Equilibrium" button to compute and display the Nash Equilibrium.
5. Ensure you have Flask installed. If not, install it using:
   ```
   pip install Flask
   ```
6. Run the Flask server:
   ```
   python backend_dynamic.py
   ```
7. Open the `frontend_dynamic.html` in a browser directly or serve it using a web server (e.g., Python's built-in server or VSCode's Live Server).

## Requirements:
- C++ compiler with support for C++11.
- Python (for the Flask backend).
- Flask library (can be installed via pip).

## Enhancements:
- Mixed strategy Nash Equilibrium computation for 2x2 matrices.
- Web-based GUI to allow users to easily input matrices of varying dimensions and view results.
- Dynamic matrix support allowing users to define matrix size.
