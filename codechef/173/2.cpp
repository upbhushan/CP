#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        unordered_map<int,int> mp;
        for(auto ele:v){
            mp[ele]++;
        }
        int val=0;
        for(auto ele:mp){
            if(ele.second > 1){
                val=ele.first;
                break;
            }
        }

        if(val){
            cout<<1<<endl;
            cout<<val<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}