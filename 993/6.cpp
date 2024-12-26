#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int A = accumulate(a.begin(), a.end(), 0LL);
    int B = accumulate(b.begin(), b.end(), 0LL);
    
    vector<int> sa, sb;
    for(int i = 0; i < n; i++) {
        sa.push_back(A - a[i]);
    }
    for(int i = 0; i < m; i++) {
        sb.push_back(B - b[i]);
    }
    
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());

    function<bool(int, int)> fnd = [&](int p, int q) {
        auto it1 = lower_bound(sa.begin(), sa.end(), p);
        auto it2 = lower_bound(sb.begin(), sb.end(), q);
        return it1 != sa.end() && *it1 == p && it2 != sb.end() && *it2 == q;
    };

    while(q--) {
        int x;
        cin >> x;
        bool flag = false;
        bool sign = x >= 0;
        x = abs(x);
        for(int i = 1; i * i <= x; i++) {
            if(x % i == 0) {
                int p = i, q = x / i;
                if(sign) {
                    if(fnd(p, q) || fnd(-p, -q)) {
                        flag = true;
                        break;
                    }
                } else {
                    if(fnd(-p, q) || fnd(p, -q)) {
                        flag = true;
                        break;
                    }
                }
                swap(p, q);
                if(sign) {
                    if(fnd(p, q) || fnd(-p, -q)) {
                        flag = true;
                        break;
                    }
                } else {
                    if(fnd(-p, q) || fnd(p, -q)) {
                        flag = true;
                        break;
                    }
                }
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
