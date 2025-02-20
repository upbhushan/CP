#include <bits/stdc++.h>
using namespace std;
#define int long long

pair<int, int> find_min_element(const vector<int>& brr) {
    int min_element = brr[0], min_position = 0;
    for (int idx = 1; idx < brr.size(); idx++) {
        if (brr[idx] < min_element) {
            min_element = brr[idx];
            min_position = idx;
        }
    }
    return make_pair(min_element, min_position);
}

vector<int> generate_cyclic_rotation(const vector<int>& brr, int min_position) {
    int m = brr.size();
    vector<int> cyclic_rotated(m);
    for (int idx = 0; idx < m; idx++) {
        cyclic_rotated[idx] = brr[(idx + min_position) % m];
    }
    return cyclic_rotated;
}

vector<int> solution(int n, int m, vector<int>& arr, vector<int>& brr) {
    pair<int, int> min_info = find_min_element(brr);
    int min_element = min_info.first;
    int min_position = min_info.second;

    vector<int> cyclic_rotated = generate_cyclic_rotation(brr, min_position);
    
    vector<int> res = arr;
    for (int start = 0; start <= n - m; start++) {
        bool can_replace = false;
        for (int i = 0; i < m; i++) {
            if (res[start + i] < cyclic_rotated[i]) break;
            if (res[start + i] > cyclic_rotated[i]) {
                can_replace = true;
                break;
            }
        }
        if (can_replace) {
            for (int i = 0; i < m; i++) {
                res[start + i] = cyclic_rotated[i];
            }
        }
    }
    return res;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n), brr(m);
        for (int& x : arr) cin >> x;
        for (int& x : brr) cin >> x;

        vector<int> ans = solution(n, m, arr, brr);
        for (int x : ans) cout << x << " ";
        cout << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
