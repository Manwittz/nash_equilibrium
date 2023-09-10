#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to find Nash Equilibria in a given payoff matrix
vector<pair<int, int>> findNashEquilibria(const vector<vector<int>>& payoffs) {
    vector<pair<int, int>> equilibria; // Stores Nash Equilibria (row strategy, column strategy)

    int numRows = payoffs.size();
    int numCols = payoffs[0].size();

    for (int rowStrategy = 0; rowStrategy < numRows; ++rowStrategy) {
        for (int colStrategy = 0; colStrategy < numCols; ++colStrategy) {
            int player1Payoff = payoffs[rowStrategy][colStrategy];
            int player2Payoff = payoffs[(rowStrategy + 1) % numRows][colStrategy];
            bool isNashEquilibrium = true;

            // Check if no player can improve their payoff by changing strategies
            for (int i = 0; i < numRows; ++i) {
                if (payoffs[i][colStrategy] > player1Payoff) {
                    isNashEquilibrium = false;
                    break;
                }
            }

            for (int j = 0; j < numCols; ++j) {
                if (payoffs[rowStrategy][j] > player2Payoff) {
                    isNashEquilibrium = false;
                    break;
                }
            }

            if (isNashEquilibrium) {
                equilibria.push_back({rowStrategy, colStrategy});
            }
        }
    }

    return equilibria;
}

int main() {
    // Define the payoff matrix (modify as needed for your real-world problem)
    vector<vector<int>> payoffs = {
        {3, 2, 4},
        {1, 0, 2},
        {5, 4, 3}
    };

    vector<pair<int, int>> nashEquilibria = findNashEquilibria(payoffs);

    if (nashEquilibria.empty()) {
        cout << "No Nash Equilibrium found." << endl;
    } else {
        cout << "Nash Equilibria found:" << endl;
        for (const auto& equilibrium : nashEquilibria) {
            cout << "Player 1 chooses Strategy " << equilibrium.first << ", ";
            cout << "Player 2 chooses Strategy " << equilibrium.second << endl;
        }
    }

    return 0;
}
