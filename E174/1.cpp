#include <bits/stdc++.h>
using namespace std;
#define int long long

void bhu() {
    int n;
    cin >> n;
    vector<int> arr(n - 2);
    
    for (int i = 0; i < n - 2; i++) {
        cin >> arr[i];
    }
    
    if (n == 3) {
        cout<<"YES"<<endl;
        return;
    }
    for (int i = 0; i < n - 4; i++) {
        if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1) {
            cout << "NO" <<endl;
            return;
        }
    }

    cout << "YES" << endl;
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
