#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> compute_binomial(int max_n) {
    vector<vector<int>> C(max_n + 1, vector<int>(max_n + 1, 0));


    for (int n = 0; n <= max_n; ++n) {
        C[n][0] = 1; 
        C[n][n] = 1; 
    }

    for (int n = 1; n <= max_n; ++n) {
        for (int k = 1; k < n; ++k) {
            C[n][k] = (C[n - 1][k] + C[n - 1][k - 1]) % MOD;
        }
    }

    return C;
}

int main() {
    int t;
    cin >> t;

    vector<int> n(t), k(t);
    int max_n = 0;

    for (int i = 0; i < t; ++i) {
        cin >> n[i];
        max_n = max(max_n, n[i]);
    }
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }

    vector<vector<int>> C = compute_binomial(max_n);

    // Output the results for each (ni, ki) pair
    for (int i = 0; i < t; ++i) {
        cout << C[n[i]][k[i]] << endl;
    }

    return 0;
}
