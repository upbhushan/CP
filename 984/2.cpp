#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t; 
    cin >> t;
    while (t--) {
        int n,k; cin>>n>>k;
        vector<pair<int,int>> v(k);
        for(int i=0;i<k;i++){
            int x,y; cin>>x>>y;
            v[i].first=x;
            v[i].second=y;
        }
        sort(v.begin(),v.end(),greater<int> ());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i].second;
        }
        cout<<sum<<endl;
    }
    return 0;
}
