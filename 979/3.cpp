#include <bits/stdc++.h>
#define int long long
#define superb ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve(int n, string s){
    // allice win
        bool flag = false;
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                if ((i > 0 && s[i - 1] == '1') || (i < n - 1 && s[i + 1] == '1') || (i == 0) || (i == n - 1 )) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return ;
}

int32_t main() {
    superb
    int tt;
    cin >> tt;
    
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(n,s);
        
    }

    return 0;
}
