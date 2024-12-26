#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int x=1e7;
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(i+1);
        }
        for(int i=0;i<n;i++){
            if(st.find(v[i])!=st.end()){
            cout<<v[i]<<" ";
            st.erase(v[i]);
            }
            else{
                cout<<*st.begin()<<" ";
                st.erase(st.begin());
            }
        }
        cout<<endl;
    }
    return 0;
}