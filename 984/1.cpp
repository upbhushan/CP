#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(vector<int> &v, int n) {
    bool flag = true;
    for (int i = 1; i < n; i++) {
        if (abs(v[i] - v[i-1]) != 7 && abs(v[i] - v[i-1]) != 5) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(v, n);
    }
    return 0;
}
