#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        // vector<string> v(n);
        vector<int> pre(n,0);
        string y; cin>>y;
        pre[0]=y.size();
        for(int i=1;i<n;i++){
            string x; cin>>x;
            int p=x.size();
            pre[i]=pre[i-1]+p;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(pre[i] <= m){
                ans++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;

}