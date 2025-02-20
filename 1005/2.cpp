#include <bits/stdc++.h>
#include <set>  // Explicitly include <set>
using namespace std;


// #define int long long

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> st;
        vector<int> pre_diff(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            st.insert(v[i]);  // Insert the current element into the set
            pre_diff[i] = st.size(); // Size of set gives the count of unique elements
        }

        for (auto ele : pre_diff) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}
