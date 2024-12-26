#include <bits/stdc++.h>
#define int long long
#define superb ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve(){
    int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        v.push_back(0);  
        sort(v.begin(), v.end());

        int steps = 0;
        int sum = 0;
        int curr_idx = 1;
        while (sum < k) {
            int rem_ele = n - curr_idx + 1;
            int cnt = v[curr_idx] - v[curr_idx - 1];
            if (sum + rem_ele * cnt < k) {
                sum = sum + rem_ele * cnt;
                steps = steps + rem_ele * cnt + 1;
                curr_idx++;
            } else {
                steps += k - sum; 
                sum = k;
            }
        }

        cout << steps << endl;
    }
    


int32_t main() {
    superb
    int tt=0;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
