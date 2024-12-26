#include<bits/stdc++.h>
using namespace std;
//  #define int long long

 int solve(const vector<int>& arr) {
    int count = 0; 
    bool inWindow = false; 

    for (int num : arr) {
        if (num != 0) {
            if (!inWindow) {
                inWindow = true;
                count++;
            }
        } else {
            inWindow = false;
        }
    }
    return count;
}

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> vv=v;
        sort(vv.begin(),vv.end());

        int allzero= vv[0]==vv[n-1] ? 1 : 0;
        int no_zero= vv[0]!=0 ? 1 : 0;

        int middle_nonzero=solve(v);
        // cout<<middle_nonzero<<endl;
        
        if(allzero){
            cout<<"0"<<endl;
        }
        else if(no_zero){
            cout<<"1"<<endl;
        }
        else if(middle_nonzero==1){
            cout<<"1"<<endl;
        }
        else if(middle_nonzero > 1){
            cout<<"2"<<endl;
        }
        
    }
    return 0;
}        