#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int gold=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]==0 && gold > 0){
                v[i]+=1;
                gold--;
                cnt++;
            }
            else if(v[i]==0 && gold==0){
                continue;
            }
            else if(v[i] >= k){
                gold+=v[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

