

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int tt; cin>>tt;

    while(tt--){
        int n; cin>>n;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        sort(ans.begin(),ans.end());
        int res=0;
        int fix=ans[0];

        for(int i=0;i<n-1;i++){
            res+=ans[n-1]-fix;
        }
        cout<<res<<endl;
    }
    return 0;
}