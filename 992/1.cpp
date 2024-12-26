#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=false;
        int idx=0;
        int cnt=0;

        for(int i=0;i<n;i++){
            if(v[i]%k==0){
                cnt++;
                idx=i;
            }
        }
        if(n==1){
            cout<<"YES"<<endl;
            cout<<1<<endl;
        }
        else if(v[0]==v[n-1] && v[0]%k!=0){
            cout<<"YES"<<endl;
            cout<<1<<endl;
        }
        else if(cnt ==1){
            cout<<"YES"<<endl;
            cout<<idx+1<<endl;
        }
        else if(cnt > 1 && cnt==n){
            cout<<"NO"<<endl;
            // cout<<1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}