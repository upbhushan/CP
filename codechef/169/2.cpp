#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v;
        int cnt=0; vector<int> idx;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x==k)
            {
            cnt++;
            idx.push_back(i);
            } 
            v.push_back(x);
        }
        int z=idx.size();
        // for(int i=0;i<z;i++){
        //     cout<<idx[i]<<" ";
        // }
        int ans=2;
        if(cnt >= (n+1)/2) ans=0;
        else {
            //prefix
            for(int i=0;i<idx.size();i++){
                int newsize=n-idx[i];
                int res=cnt;
                for(int j=0;j<idx[i];j++){
                    if(v[j]==k) res--;
                }
                // cout<<newsize<<endl;
                if(res >= (newsize+1)/2) {
                    ans=1;
                    break;
                }
            }
            //suffix
            for(int i=z-1;i>=0;i--){
                int newsize=idx[i]+1;
                // cout<<newsize<<endl;
                int res=cnt;
                for(int j=idx[i]+1;j<n;j++){
                    if(v[j]==k) res--;
                }
                if(res >= (newsize+1)/2) {
                    ans=1;
                    break;
                }          
            }
        } 
        cout<<ans<<endl;  
    }
    return 0;
}