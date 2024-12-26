#include <bits/stdc++.h>
using namespace std;

// Main function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, p;
        cin >> s >> p;

        // Build index mapping for characters in `p`
        vector<int> ind(26, -1);
        for (int i = 0; i < 26; i++) {
            ind[p[i] - 'a'] = i;
        }

        // Initialize DP array
        vector<vector<int>> dp(n, vector<int>(26, -1));

        // Define the solve function as a lambda
        auto solve = [&](int index, int lastChar, auto &&self) -> int {
            if (index == n) return 0; // Base case
            if (dp[index][lastChar] != -1) return dp[index][lastChar];

            int first = n + 1, second = n + 1;

            // Case 1: Don't transform the character
            if (s[index] - 'a' >= lastChar)
                first = self(index + 1, s[index] - 'a', self);

            // Case 2: Transform the character using permutation `p`
            if (ind[s[index] - 'a'] != -1) { // Ensure index is valid
                char transformed = p[25 - ind[s[index] - 'a']];
                if (transformed - 'a' >= lastChar)
                    second = 1 + self(index + 1, transformed - 'a', self);
            }

            return dp[index][lastChar] = min(first, second);
        };

        // Call the solve function
        int result = solve(0, 0, solve);
        cout << (result > n ? -1 : result) << endl;
    }
    return 0;
}
