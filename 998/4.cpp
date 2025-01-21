#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool flag = true;
        for (int i = 1; i < n; ++i) {
            int min_val = min(a[i - 1], a[i]);
            a[i - 1] -= min_val;
            a[i] -= min_val;

            if (a[i - 1] > a[i]) {
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt=1; cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
