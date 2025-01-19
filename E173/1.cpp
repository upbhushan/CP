#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n) {
    if (n <= 3) return 1; 
    return 2 * solve(n / 4);
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl; 
    }
    return 0;
}
