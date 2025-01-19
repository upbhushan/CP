#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        vector<int> v(n);
        int less = 0, more = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            v[i] = b[i] - a[i];

            if (v[i] > 0) {
                less += v[i];  
            } else {
                more += v[i]; 
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (v[i] > 0) {
                if (a[i] < b[i] + less - 2 * v[i]) {
                    flag = false;
                    break;  
                }
            } else {
                if (a[i]  < b[i] + less) {
                    flag = false;
                    break;  
                }
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
