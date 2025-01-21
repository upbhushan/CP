#include <bits/stdc++.h>
#define int long long 
using namespace std;

int solve(int a, int b, int i, int d, int e) {
    int cnt = 0;
    if (i == a + b) cnt++;
    if (d == b + i) cnt++;
    if (e == i + d) cnt++;
    return cnt;
}

int32_t main() {
    int tt=1;
    cin >> tt; 
    while (tt--) {
        int a,b,d,e;
        cin >>a>>b>>d>>e;
        int ans = 0;
        for (int i = -500; i <= 500; ++i) {
            ans = max(ans, solve(a,b,i,d,e));
        }
        cout << ans << endl;
    }
    return 0;
}
