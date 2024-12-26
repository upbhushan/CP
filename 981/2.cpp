#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> v(n,vector<int> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        int ans=0;
        // traverse lower matrix
        for(int i=0;i<n;i++){
            int res=0;
            for(int j=0;j<(n-i);j++){
                res=min(res,v[i+j][j]);
            }
            ans+=abs(res);
        }
        // traverse upper matrix

        for(int j=1;j<n;j++){
            int res=0;
            for(int i=0;i<(n-j);i++){
                res=min(res,v[i][j+i]);
            }
            ans+=abs(res);
        }
        cout<<ans<<endl;
    }
    return 0;
}