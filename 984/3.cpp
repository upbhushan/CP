#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(k, 0);

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            v[x - 1] += y;  
        }

        sort(v.begin(), v.end(),greater<int> ());

        int sum = 0;
        for (int i = 0; i < min(n, k); i++) {
            sum += v[i];
        }

        cout << sum << endl;
    }
    return 0;
}
