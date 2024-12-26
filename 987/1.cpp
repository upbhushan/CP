#include <bits/stdc++.h>
#define int long long
using namespace std;
int solve(vector<int> &h,int n){
    vector<int> v(n, 1);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (h[j] <= h[i]) {
                v[i] = max(v[i], v[j] + 1);
                }
            }
        }
    int x=*max_element(v.begin(), v.end());
    return x;
}

void bhu() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        int max_ele=solve(h,n);
        cout << (n - max_ele)<< endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    bhu();
    return 0;
}



