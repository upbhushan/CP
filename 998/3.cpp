#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(unordered_map<int, int>& mp, int k) {
    int ans = 0;
    for (auto ele : mp) {
        int x = ele.first;
        int count = ele.second;
        int opp = k - x;
        if (mp.count(opp)) {
            int pairs = min(mp[x], mp[opp]);
            if (x == opp) {
                pairs /= 2;
            }
            ans += pairs;
            mp[x] -= pairs;
            mp[opp] -= pairs;
        }
    }
    return ans;
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        // store freq
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        cout << solve(mp, k) << endl;
    }

    return 0;
}
