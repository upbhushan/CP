#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int max_sub = 1;
        int curr_sub = 1;

        for (int i = 1; i < n; i++) {
            if (v[i] >= v[i - 1]) {
                curr_sub++;
            } else {
                curr_sub = 1;
            }
            max_sub = max(max_sub, curr_sub);
        }
        for (int i = 0; i < n; i++) {
            vector<int> temp = v;
            temp[i] *= x;  

            int new_max_sub = 1;
            int new_curr_sub = 1;

            for (int j = 1; j < n; j++) {
                if (temp[j] >= temp[j - 1]) {
                    new_curr_sub++;
                } else {
                    new_curr_sub = 1;
                }
                new_max_sub = max(new_max_sub, new_curr_sub);
            }
            max_sub = max(max_sub, new_max_sub);
        }

        cout << max_sub << endl;
    }
    return 0;
}
