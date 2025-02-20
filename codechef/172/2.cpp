#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string a, b;
    cin >> a >> b;

    ll n = a.size(), m = b.size();
    ll ptr = m - 1, ans = 0;

    for (ll i = n - 1; i >= 0; i--) {
        if (ptr >= 0 && b[ptr] == a[i])
            ptr--;
        else
            ans += ptr + 2;
    }

    cout << (ptr >= 0 ? -1 : ans) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
