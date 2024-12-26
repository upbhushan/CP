#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void compute_prime_factors(int num, unordered_map<int, int>& prime_factors) {
    for (int p = 2; p * p <= num; ++p) {
        while (num % p == 0) {
            prime_factors[p]++;
            num /= p;
        }
    }
    if (num > 1) {
        prime_factors[num]++;
    }
}

long long compute_divisors_count(const unordered_map<int, int>& prime_factors) {
    long long count = 1;
    for (const auto& [prime, exponent] : prime_factors) {
        count = count * (exponent + 1) % MOD;
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> m_factorial_factors;
    for (int i = 2; i <= m; ++i) {
        compute_prime_factors(i, m_factorial_factors);
    }

    vector<long long> results;
    for (int ai : a) {
        unordered_map<int, int> current_factors = m_factorial_factors;

        compute_prime_factors(ai, current_factors);

        results.push_back(compute_divisors_count(current_factors));
    }

    for (long long result : results) {
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
