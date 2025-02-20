#include <bits/stdc++.h>
using namespace std;

void bhu() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n == 2) {  
        cout << max(0, v[0] - v[1]) << '\n';
        return;
    }

    vector<int> pre_cal(n - 1, 0);
    vector<int> suf_cal(n - 1, 0);

    pre_cal[0] = max(0, v[0] - v[1]);
    for (int i = 1; i < n - 1; i++) {
        pre_cal[i] = max(0, pre_cal[i - 1] - v[i+1] );
    }
    for(auto ele:pre_cal) cout<< ele <<" ";
    cout<<endl;

    suf_cal[n - 2] = max(0, v[n - 2] - v[n - 1]);
    for (int i = n - 3; i >= 0; i--) {
        suf_cal[i] = max(0, v[i-1] - suf_cal[i + 1]);
    }
    for(auto ele:suf_cal) cout<< ele <<" ";
    cout<<endl;

    int maxi = 0;
    for (int i = 0; i < n - 1; i++) {
        maxi = max(maxi,pre_cal[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        maxi = max(maxi,suf_cal[i]);
    }

    cout << maxi << '\n';
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
