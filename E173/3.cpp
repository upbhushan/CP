#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxSubarraySum(vector<int>& arr, int start, int end) {
    int max_sum = INT_MIN;
    int curr_sum = 0;

    for (int i = start; i < end; i++) {
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }

    return max_sum;
}

int minSubarraySum(vector<int>& arr, int start, int end) {
    vector<int> vv;
    for (int i = start; i < end; i++) {
        vv.push_back(-arr[i]); 
    }
    int min_sum = maxSubarraySum(vv, 0, vv.size());
    return -min_sum; 
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int idx = -1;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] != 1 && v[i] != -1 && idx == -1) {
                idx = i;
            }
        }

        int max_sum1 = 0, min_sum1 = 0;

        if (idx != 0) {
            max_sum1 = maxSubarraySum(v, 0, idx == -1 ? n : idx);
            min_sum1 = minSubarraySum(v, 0, idx == -1 ? n : idx);
        }

        int max_sum2 = 0, min_sum2 = 0;
        if (idx != -1  && idx + 1 < n) {
            max_sum2 = maxSubarraySum(v, idx + 1, n);
            min_sum2 = minSubarraySum(v, idx + 1, n);
        }

        int minn = min(min_sum1, min_sum2);
        int maxx = max(max_sum1, max_sum2);

        set<int> res;
        for (int i = minn; i <= maxx; i++) {
            res.insert(i);
        }

        if (idx != -1) {
            int l = minn + v[idx];
            int r = maxx + v[idx];
            for (int i = l; i <= r; i++) {
                res.insert(i);
            }
        }

        cout << res.size() << endl;
        for (auto ele : res) {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}
