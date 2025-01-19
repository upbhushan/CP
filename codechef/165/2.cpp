#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
ll a[n];     \
f(i, n) cin >> a[i]
#define iv(v,n) vector<ll> v(n); f(i,n) cin >> v[i]
#define MOD (1000000007)
#define INF 1000000000000000000LL
#define mp make_pair



void solve() {
    ll n;
    cin >> n;
    ia(a,n);
    vector<pair<ll,ll>> v;
    v.push_back(make_pair(INF,-1));
    f(i,n) {
        if(v.empty()) {
            v.push_back(make_pair(a[i],i));
        }
        else{
            while(v.size() && v.back().first < a[i]) {
                v.pop_back();
            }
            v.push_back(make_pair(a[i],i));
        }
    }

    ll ans = 0;
    f(i,v.size()-1) {
        ans = max(ans,v[i+1].second - v[i].second-1);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}