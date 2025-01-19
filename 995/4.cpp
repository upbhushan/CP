#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Sort the array for binary search
        sort(v.begin(), v.end());

        int cnt = 0; // Count of valid pairs

        // Iterate over all elements in the array
        for (int i = 0; i < n; i++) {
            int a = v[i]; // Fixed element
            int l, r;

            // Find the lower bound (first index >= x - a)
            auto it1 = lower_bound(v.begin() + i + 1, v.end(), x - a);
            if (it1 == v.end()) {
                l = -1; // No valid lower bound
            } else {
                l = it1 - v.begin(); // Index of the lower bound
            }

            // Find the upper bound (last index <= y - a)
            auto it2 = upper_bound(v.begin() + i + 1, v.end(), y - a);
            if (it2 == v.begin() + i + 1) {
                r = -1; // No valid upper bound
            } else {
                r = (it2 - v.begin()) - 1; // Index of the upper bound
            }

            // Count valid pairs within range [l, r]
            if (l != -1 && r != -1 && l <= r) {
                cnt += (r - l + 1);
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
