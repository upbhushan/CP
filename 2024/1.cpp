#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool flag = false;
    for (int i = 1; i < n ; i++) {
        int min_ele = min(v[i], v[i-1]);
        if(min_ele==v[i]){
            if(min_ele+ min_ele > v[i-1]) {
                flag=true;
                break;
            }
        }
        else{
            if(min_ele+ min_ele > v[i]){
                flag=true;
                break;
            }
        }
    }
    if(flag) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
