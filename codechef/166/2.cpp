#include <bits/stdc++.h>
using namespace std;

int find(int target, vector<int> &vv) {
    int n = vv.size();
    int lo = -1, hi = n; 

    while (hi - lo > 1) {
        int mid = lo + (hi - lo) / 2;

        if (vv[mid] == target) {
            return mid;
        } else if (vv[mid] < target) {
            lo = mid;
        } else {
            hi = mid;
        }
    }

    return -1; // Target not found
}

int count_groups(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;

    int groups = 0;
    int i = 0;

    while (i < n) {
        groups++;
        while (i + 1 < n && abs(arr[i] - arr[i + 1]) == 1) {
            i++;
        }
        i++; 
    }

    return groups;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> vv = v;
        sort(vv.begin(), vv.end());
        vector<int> idx(n);

        for (int i = 0; i < n; i++) {
            idx[i] = find(v[i], vv); 
        }

        int cnt = count_groups(idx); 
        cout << cnt << endl;        
    }
    return 0;
}
