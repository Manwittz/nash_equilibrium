
#include <iostream>
#include <vector>

using namespace std;

pair<float, float> findMixedStrategyNashEquilibrium(const vector<vector<pair<int, int>>>& payoffs) {
    // Extract payoffs from the matrix
    int a = payoffs[0][0].first;
    int c = payoffs[0][1].first;
    int e = payoffs[1][0].first;
    int g = payoffs[1][1].first;

    // Calculate p for Player 1
    float p = static_cast<float>(g - e) / (a - e - c + g);

    // Calculate q for Player 2 (similar approach)
    float q = static_cast<float>(c - a) / (a - e - c + g);

    return {p, q};
}

int main() {
    vector<vector<pair<int, int>>> payoffs = {
        {{3, 2}, {5, 0}},
        {{0, 6}, {1, 4}}
    };

    pair<float, float> equilibrium = findMixedStrategyNashEquilibrium(payoffs);
    cout << "Mixed Strategy Nash Equilibrium: p = " << equilibrium.first << ", q = " << equilibrium.second << endl;

    return 0;
}
