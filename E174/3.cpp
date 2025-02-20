#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const ll MOD = 998244353;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    // Precompute powers of 2 and their inverses up to MAX.
    // Maximum count of 2's is at most n (n <= 2e5), so we set MAX accordingly.
    const int MAX = 200005;
    vector<ll> pow2(MAX), inv2(MAX);
    pow2[0] = 1;
    for (int i = 1; i < MAX; i++){
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }
    // The modular inverse of 2 mod MOD is known to be 499122177.
    ll inv2_val = 499122177;
    inv2[0] = 1;
    for (int i = 1; i < MAX; i++){
        inv2[i] = (inv2[i-1] * inv2_val) % MOD;
    }
    
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // Build prefix array for the count of 2's.
        // pref[i] = number of 2's in a[0..i]
        vector<int> pref(n, 0);
        pref[0] = (a[0] == 2);
        for (int i = 1; i < n; i++){
            pref[i] = pref[i-1] + (a[i] == 2);
        }
 
        // We will "sweep" through the array and maintain:
        //   S = sum of 2^{-pref[i]} for all positions i with a[i]==1 encountered so far.
        //   cnt = number of 1's encountered so far.
        ll ans = 0;
        ll S = 0; // Running sum for f(i) = 2^{-pref[i]}
        ll cnt = 0; // Count of ones encountered.
 
        for (int i = 0; i < n; i++){
            if(a[i] == 1){
                // When we see a 1, add its weight f(i)=2^{-pref[i]}
                S = (S + inv2[pref[i]]) % MOD;
                cnt++;
            } else if(a[i] == 3){
                // For a 3 at index i, the number of 2's up to index i-1 is:
                int cnt2 = (i == 0 ? 0 : pref[i-1]);
                // The total contribution from all earlier 1's is:
                // 2^(cnt2) * (sum of f(i) for earlier ones) - (number of earlier ones)
                ll contribution = (pow2[cnt2] * S) % MOD;
                contribution = (contribution - cnt) % MOD;
                if(contribution < 0) contribution += MOD;
                ans = (ans + contribution) % MOD;
            }
            // For a[i]==2, nothing extra is done.
        }
 
        cout << ans % MOD << "\n";
    }
    
    return 0;
}
