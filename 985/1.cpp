#include <bits/stdc++.h>
#define superb ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main() {
    superb
    int t;
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
	    cout << max(r / k - l + 1, 0) << endl;
    }
    return 0;
}



