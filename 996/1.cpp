#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
       int n,a,b; cin>>n>>a>>b;
       int max_ele=max(a,b);
       int min_ele=min(a,b);
       int moves=max_ele-min_ele-1;
       if(moves%2!=0){
        cout<<"YES"<<endl;
       } 
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}