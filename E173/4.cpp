#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long l, r, G;
        cin >> l >> r >> G;

        long long A = (r / G) * G;
        if (A < l) {
            cout << "-1 -1" << endl;
            continue;
        }

        long long B = A - G;
        if (B < l) {
            cout << "-1 -1" << endl;
        } else {
            cout << A << " " << B << endl;
        }
    }
    
    return 0;
}
