#include <bits/stdc++.h>
using namespace std;
#define int long long

void bhu() {
    int n;
    cin >> n;
    
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    for (auto &ele : mp) {  
        if (ele.second > 1) {
            int pairs = ele.second / 2;
            mp[0] += pairs;  
            ele.second -= 2 * pairs;
        }
    }

    int odd_cnt = 0;
    int zeros = (mp[0] > 0 ? 1 : 0);

    for (auto &[val, cnt] : mp) {
        if (val != 0 && cnt % 2 == 1) {
            odd_cnt++;
        }
    }
    int ans=odd_cnt + zeros;
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        bhu();
    }
    return 0;
}
