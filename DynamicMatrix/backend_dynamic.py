#!/usr/bin/env python3

from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/calculate', methods=['POST'])
def calculate_nash():
    matrix = request.json['matrix']
    nash_equilibria = []

    # Iterate over all strategy combinations and check for Nash Equilibria
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            is_nash_for_p1 = True  # Assume (i, j) is a Nash Equilibrium for player 1
            is_nash_for_p2 = True  # Assume (i, j) is a Nash Equilibrium for player 2

            # Check for player 1
            for k in range(len(matrix)):
                if matrix[k][j][0] > matrix[i][j][0]:  # Player 1 can benefit by switching to strategy k
                    is_nash_for_p1 = False
                    break

            # Check for player 2
            for l in range(len(matrix[0])):
                if matrix[i][l][1] > matrix[i][j][1]:  # Player 2 can benefit by switching to strategy l
                    is_nash_for_p2 = False
                    break

            if is_nash_for_p1 and is_nash_for_p2:  # (i, j) is a Nash Equilibrium
                nash_equilibria.append((i, j))

    return jsonify({'equilibria': nash_equilibria})


if __name__ == '__main__':
    app.run()
