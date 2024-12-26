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
        priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> pq;
        for(int i=0;i<n;i++){
            pq.push({v[i],i});
        }

        int steps=0;
        while(!pq.empty()){
            int x=pq.top().first;
            int y=pq.top().second;
            pq.pop();
            int xx=pq.top().first;
            int yy=pq.top().second;

            if(x > xx && y > yy){
                steps+=abs(y-yy);
            }
        }
        cout<<steps<<endl;
        
    }
    return 0;
}