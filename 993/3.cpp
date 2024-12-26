#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        int m,a,b,c; cin>>m>>a>>b>>c;
        int maxx=2*m;
        int ans=a+b+c;
        if(m<a){
            ans=ans-(a-m);
        }
        if(m<b){
            ans-=(b-m);
        }
        if(ans > 2*m){
            cout<<2*m<<endl;
        }
        else{
            cout<<ans<<endl;
            
        }    
    }
    return 0;
}