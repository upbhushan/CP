#include<bits/stdc++.h>
#define int long long 
#define superb ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int32_t main(){
    int t=0; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if(a==0) cout<<0<<endl;
        else if(a >= b){
            cout<<a<<endl;
        }
        else if(b >= 2*a){
            cout<<0<<endl;
        }
        else{
            // bool flag=false;
            // while(b>a){
            //     a--;
            //     b=b-2;
            //     if(a>=b){
            //         flag=true;
            //         break;
            //     }
            // }
            // if(flag){
            //     cout<<a<<endl;
            // }
            cout<<(a-(b-a))<<endl;
        }
    }
    return 0;
}