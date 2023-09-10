#!/usr/bin/env python3

from flask import Flask, request, jsonify
import subprocess

app = Flask(__name__)

@app.route('/calculate', methods=['POST'])
def calculate_nash():
    matrix = request.json
    
    # Call C++ executable and get results
    # For simplicity, we're assuming the compiled executable is named "nash_equilibrium"
    # and is located in the current directory.
    result = subprocess.run(['./nash_equilibrium', matrix['a'], matrix['c'], matrix['e'], matrix['g']], stdout=subprocess.PIPE)
    nash_equilibrium = result.stdout.decode('utf-8').split(',')
    p = float(nash_equilibrium[0].split('=')[1].strip())
    q = float(nash_equilibrium[1].split('=')[1].strip())
    
    return jsonify({'p': p, 'q': q})

if __name__ == '__main__':
    app.run()
