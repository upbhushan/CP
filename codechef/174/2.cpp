#include <bits/stdc++.h>
using namespace std;
#define int long long

void bhu() {
    int n; cin>>n;
    string s; cin>>s;
    // int n=s.size();
    string ans="";
    for(int i=0;i<n;i++){
        ans+='z';
    }
    if(ans==s) cout<<"-1"<<endl;
    else cout<<ans<<endl;
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
