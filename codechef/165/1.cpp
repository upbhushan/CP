#include<bits/stdc++.h>
using namespace std;
// #define int long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        // priority_queue<int> pq;
        priority_queue<int, vector<int>, greater<int>> pq(v.begin(),v.end());
        // for(int i=0;i<n;i++){
        //     pq.push(v[i]);
        // }
        int ans=0;
        int cnt=0;
        while(!pq.empty()){
            int min_ele=pq.top();
            pq.pop();
            if(min_ele - cnt > 0){
                ans+=min_ele-cnt;
            }
            cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}